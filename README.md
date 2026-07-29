# mulle-freetype

#### ⌨️ mulle-freetype is a mulle-sde dependency convenience

This project is nothing but a dependency convenience for mulle-sde projects
that use [freetype](https://freetype.org/) with [harfbuzz](//github.com/harfbuzz/harfbuzz).
It does not build a library itself.

### Linux

On Linux it uses the system supplied harfbuzz for faster compilation.

### Windows/Darwin

Build harfbuzz together with freetype.


## Add

mulle-freetype is a dependency convenience that does not produce a library.
It must be added with `no-actual-build`, `no-link`, and `no-header` marks:

``` bash
mulle-sde dependency add \
   --c \
   --marks no-actual-build,no-actual-link,no-all-load,no-cmake-loader,no-cmake-searchpath,no-header,no-import,no-link \
   github:MulleUI/mulle-freetype
```

> The `no-actual-build` mark is required because mulle-freetype has no build
> product. Unlike `no-build`, it still allows traversal of mulle-freetype's
> sourcetree so that freetype, harfbuzz and their craftinfo are built as
> part of your project's craftorder.
