# lcui-quick-start

[![C/C++ CI](https://github.com/lcui-dev/lcui-quick-start/actions/workflows/ccpp.yml/badge.svg)](https://github.com/lcui-dev/lcui-quick-start/actions/workflows/ccpp.yml)

(**English**/[中文](README.zh-cn.md))

**Clone and run for a quick way to see LCUI in action.**

## To Use

To clone and run this repository you'll need install the following tools on your computer:

- [Git](https://git-scm.com)
- [Node.js](https://nodejs.org/en/download/) 22 or later (which comes with [npm](http://npmjs.com))
- [XMake](https://xmake.io/)

From your command line:

```bash
# Clone this repository
git clone https://github.com/lcui-dev/lcui-quick-start.git

# Go into the repository
cd lcui-quick-start

# Install dependencies
npm install

# Build
npm run build

# Run the app
xmake run app
```

## What's included

- `app/`: Directory for storing source code and resources based on application routers.
  - `about/`: Directory for the about page.
    - `logo.png`: Project icon file.
    - `page.c`: C source file for the about page.
    - `page.h`: C header file for the about page.
    - `page.tsx`: TypeScript source file for the about page.
    - `page.tsx.h`: page.tsx compiled into C source code, included by page.c.
    - `styles.module.scss`: CSS module.
    - `styles.module.scss.h`: CSS module compiled into C code, included by page.tsx.h.
  - `global.css`: Global CSS styles.
  - `page.c`: C source file for the main page.
  - `page.h`: C header file for the main page.
  - `page.tsx`: TypeScript source file for the main page.
  - `page.tsx.h`: page.tsx compiled into C code, included by page.c.
  - `layout.tsx`: Layout containing UI shared with subpages.
  - `main.c`: Main entry source file containing the source code for `main()` function.
  - `main.h`: Main entry header file containing headers and functions required by `main()` function.
- `.clang-format`: Code formatting configuration file.
- `xmake.lua`: Configuration file for [XMake](https://xmake.io/).
- `package.json`: Description of the basic information and dependencies of the application.
- `tailwind.config.js`: Configuration file for [Tailwind CSS](https://tailwindcss.com/). It uses [`@lcui/tailwind-config`](https://www.npmjs.com/package/@lcui/tailwind-config) to keep only the utilities that LCUI's CSS engine supports.
- `postcss.config.js`: Configuration file for [PostCSS](https://postcss.org/).
- `version.rc`: Resource file describing the icon and information of the Windows executable.
- `logo.ico`: Icon file for the Windows executable.
- `tsconfig.json`: [TypeScript configuration file](https://www.typescriptlang.org/docs/handbook/tsconfig-json.html).

## License

[CC0 1.0 (Public Domain)](LICENSE.md)
