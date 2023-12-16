# lcui-quick-start

[![C/C++ CI](https://github.com/lcui-dev/lcui-quick-start/actions/workflows/ccpp.yml/badge.svg)](https://github.com/lcui-dev/lcui-quick-start/actions/workflows/ccpp.yml)

(**English**/[中文](README.zh-cn.md))

**Clone and run for a quick way to see LCUI in action.**

## To Use

To clone and run this repository you'll need install the following tools on your computer:

- [Git](https://git-scm.com)
- [Node.js](https://nodejs.org/en/download/) (which comes with [npm](http://npmjs.com))
- [XMake](https://xmake.io/)

From your command line:

```bash
# Clone this repository
git clone https://github.com/lc-ui/lcui-quick-start

# Go into the repository
cd lcui-quick-start

# Update git submodule
git submodule sync --recursive
git submodule update --init --recursive

# Compile resource files
lcui compile ./src

# Build
xmake

# Run
xmake run
```

## What's included

- Some resource files.
- Some scripts that make it easy for you to quickly build application.
- Configuration file for [XMake](https://xmake.io/).
- Simple data storage implementation in `src/lib/store.c`.
- [.scss](https://sass-lang.com/guide) files for describe the user interface style.
- `about` component for display app infomation.
- `home` view that implements simple layout and interaction.

## Project Structure

- **`app`**: contains the resource files required for the application to run. You can use it as the working directory of the application, and when you publish your application, you only need to package the files in that directory.
- **`build`**: contains build tool output files.
- **`src`**: contains the source code.
  - **`style`**: contains the source code of stylesheets. You can put [.scss](https://sass-lang.com/guide) files here.
  - **`components`**: contains the source code of the components.
  - **`views`**: contains the source code of the views.
  - **`lib`**: contains the base library code.

## License

[CC0 1.0 (Public Domain)](LICENSE.md)
