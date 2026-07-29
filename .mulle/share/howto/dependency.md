# mulle-sde Dependency and File inclusion guidelines
<!-- Keywords: craft, build, run -->

You should add remote single files like `stb_image.h` or complete repositories
like  `zlib` with the `mulle-sde dependency` command. Check out the help
file for examples:

```bash
mulle-sde dependency help
```

## Preference for github repositories

Use this style:

``` bash
mulle-sde dependency add github:name/repo
```

This will do what you need in most cases.
If you need to tweak the dependency read the documentation with regards to
"marks" of a sourcetree.

## Dependency convenience wrappers

Some projects exist only to bundle multiple dependencies together (e.g.,
mulle-freetype bundles freetype + harfbuzz). These produce no library
themselves. Add them with `no-actual-build` so their subdependencies are
still traversed and built:

``` bash
mulle-sde dependency add \
   --marks no-all-load,no-actual-build,no-cmake-loader,no-cmake-searchpath,no-header,no-import,no-link \
   github:user/repo
```

The `no-actual-build` mark differs from `no-build`:
- `no-build`: excludes the node from the craftorder entirely, its
  subdependencies are NOT traversed
- `no-actual-build`: keeps the node in the craftorder for traversal of
  subdependencies, but skips running cmake/make on the node itself