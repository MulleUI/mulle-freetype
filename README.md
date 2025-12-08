# mulle-freetype

#### ⌨️ mulle-freetype is a mulle-sde convenience

This project contains nothing but link information for mulle-sde projects
that use [freetype](https://freetype.org/) with [harfbuzz](//github.com/harfbuzz/harfbuzz).

### Linux

On Linux it uses the system supplied harfbuzz for faster compilation.

### Windows/Darwin

Build harfbuzz together with freetype.


## mulle-sde

This is a [mulle-sde](//github.com/mulle-sde) project. mulle-sde combines
package management with cross-platform builds via **cmake**:

| Action  | Command                               | Description                         |
|---------|---------------------------------------|-------------------------------------|
| Build   | `mulle-sde craft [--release/--debug]` | Build into a local `kitchen` folder |
| Install | `mulle-sde install --prefix /usr/local https://github.com/MulleUI/mulle-freetype.git` | Like `make install`         |

