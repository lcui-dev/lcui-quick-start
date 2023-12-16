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
# Install command line tool
npm install -g @lcui/cli

# Create project
lcui create my-lcui-app
```

## What's included

- Some resource files.
- Configuration file for [XMake](https://xmake.io/).
- Simple data storage implementation in `src/lib/store.c`.
- [.scss](https://sass-lang.com/guide) files for describe the user interface style.
- Some tsx files used to describe the structure of the user interface. You can refer to it to write stateless components using the TypeScript language and React library.
- `about` component for display app information.
- `home` page that implements simple layout and interaction.

## Project Structure

- **`app`**: contains the resource files required for the application to run. You can use it as the working directory of the application, and when you publish your application, you only need to package the files in that directory.
- **`build`**: contains build tool output files.
- **`src`**: contains the source code.
  - **`assets`**: contains resource files.
  - **`style`**: contains the source code of stylesheets. You can put [.scss](https://sass-lang.com/guide) files here.
  - **`components`**: Contains source code for components.
  - **`pages`**: Contains source code for pages.
  - **`lib`**: contains the base library code.

## License

[CC0 1.0 (Public Domain)](LICENSE.md)
