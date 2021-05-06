# lcui-quick-start

[![GitHub Actions](https://github.com/lc-ui/lcui-quick-start/workflows/C%2FC%2B%2B%20CI/badge.svg)](https://github.com/lc-ui/lcui-quick-start/actions)

(**English**/[中文](README.zh-cn.md))

**Clone and run for a quick way to see LCUI in action.**

## To Use

To clone and run this repository you'll need install the following tools on your computer:

- [Git](https://git-scm.com)
- [Node.js](https://nodejs.org/en/download/) (which comes with [npm](http://npmjs.com))
- [LCPkg](https://github.com/lc-soft/lcpkg) (Windows only):
    ```bash
    npm install -g lcpkg
    lcpkg setup
    ```
- [CMake](https://cmake.org/) or [XMake](https://xmake.io/)

Open your command line terminal and type the following command to clone this repository:

```bash
git clone https://github.com/lc-ui/lcui-quick-start
```

Go into the repository:

```bash
cd lcui-quick-start
```

Install Node.js dependencies:

```bash
npm install
```

Install C/C++ dependencies:

```bash
# for Windows
lcpkg install --arch x64

# for Linux
sh ./setup.sh
```

Build and run this repository:

```bash
npm start
```

Other useful commands:

```bash
# Configure the compiler to compile in debug mode
lcui build --mode debug

# Use CMake to build this repository
lcui build --tool cmake

# Compile css files
npm run build:css
```

## What's included

- Some resource files.
- Some scripts that make it easy for you to quickly build application.
- Configuration files for [CMake](https://cmake.org/) and [XMake](https://xmake.io/) build tools, You can choose one of them that you like.
- Simple data storage implementation in `src/lib/store.c`.
- [.scss](https://sass-lang.com/guide) files for describe the user interface style.
- `about` component for display app infomation.
- `home` view that implements simple layout and interaction.

## Project Structure

- **`app`**: contains the resource files required for the application to run. You can use it as the working directory of the application, and when you publish your application, you only need to package the files in that directory.
- **`build`**: contains build tool output files.
- **`scripts`**: contains build-related scripts and configuration files.
- **`src`**: contains the source code.
  - **`ui`**: contains source code related to the user interface.
    - **`stylesheets`**: contains the source code of stylesheets. You can put [.scss](https://sass-lang.com/guide) files here, they will be compiled into css files and outputed to the `app/assets/stylesheets` directory at build time.
    - **`components`**: contains the source code of the components.
    - **`views`**: contains the source code of the views.
  - **`lib`**: contains the base library code.

## License

[CC0 1.0 (Public Domain)](LICENSE.md)
