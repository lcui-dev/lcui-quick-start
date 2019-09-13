# lcui-quick-start

**Clone and run for a quick way to see LCUI in action.**

## To Use

To clone and run this repository you'll need [Git](https://git-scm.com) and [Node.js](https://nodejs.org/en/download/) (which comes with [npm](http://npmjs.com)) installed on your computer. From your command line:

```bash
# Clone this repository
git clone https://github.com/lc-soft/lcui-quick-start
# Go into the repository
cd lcui-quick-start
# Install lcpkg
npm install -g lcpkg
# Install NodeJS dependencies
npm install
# Install C/C++ dependencies
lcpkg install
# Run the app
lcpkg run start
```

## Project Structure

- **`app`**: contains the resource files required for the application to run. You can use it as the working directory of the application, and when you publish your application, you only need to package the files in that directory.
- **`build`**: contains build tool output files.
- **`scripts`**: contains build-related scripts and configuration files.
- **`src`**: contains the source code.
  - **`ui`**: contains source code related to the graphical interface.
    - **`stylesheets`**: contains the source code of stylesheets. You can put [.scss](https://sass-lang.com/guide) files here, they will be compiled into css files and exported to the `app/assets/stylesheets` directory at build time.
    - **`components`**: contains the source code of the components.
    - **`views`**: contains the source code of the views.
  - **`lib`**: contains the base library code.

## License

[CC0 1.0 (Public Domain)](LICENSE.md)
