# 快速上手示例

[![C/C++ CI](https://github.com/lcui-dev/lcui-quick-start/actions/workflows/ccpp.yml/badge.svg)](https://github.com/lcui-dev/lcui-quick-start/actions/workflows/ccpp.yml)

([English](README.md)/**中文**)

**克隆并运行以快速查看 LCUI 的运行方式。**

## 使用

在克隆和运行这个仓库之前，你需要在你的计算机上安装:

- [Git](https://git-scm.com)：版本管理工具
- [Node.js](https://nodejs.org/en/download/) (自带 [npm](http://npmjs.com))：JavaScript 运行环境
- [XMake](https://xmake.io/)：构建工具

之后，运行以下命令：

```bash
# 安装命令行工具
npm install -g @lcui/cli

# 克隆代码库
git clone https://gitee.com/lcui-dev/lcui-quick-start.git

# 进入代码库目录
cd lcui-quick-start

# 下载 git 子模块
git submodule sync --recursive
git submodule update --init --recursive

# 安装依赖
npm install

# 构建
lcui build

# 运行
xmake run app
```

## 包含什么

- `app/`：用于存放基于应用路由器的源码和资源。
  - `about/`: 关于页的目录。
    - `logo.png`：项目图标文件。
    - `page.c`: 关于页的 C 源文件。
    - `page.h`: 关于页的 C 头文件。
    - `page.tsx`: 关于页的 TypeScript 源文件。
    - `page.tsx.h`: 已编译为 C 源码的 page.tsx，供 page.c 包含。
    - `styles.module.scss`: CSS 模块。
    - `styles.module.scss.h`: 已编译为 C 代码的 CSS 模块，供 page.tsx.h 包含。
  - `global.css`: 全局 CSS 样式。
  - `page.c`: 主页的 C 源文件。
  - `page.h`: 主页的 C 头文件。
  - `page.tsx`: 主页的 TypeScript 源文件。
  - `page.tsx.h`: 已编译为 C 代码的 page.tsx，供 page.c 包含。
  - `layout.tsx`: 布局，包含与子页面共享的 UI。
  - `main.c`: 主入口源文件，包含 `main()` 函数源码。
  - `main.h`: 主入口头文件，包含 `main()` 函数所依赖的头文件和函数。
- `.clang-format`: 代码格式化配置文件。
- `xmake.lua`: [XMake](https://xmake.io/) 的配置文件。
- `package.json`: 描述应用程序的基本信息和依赖项。
- `tailwind.config.js`: [Tailwind CSS](https://tailwindcss.com/) 的配置文件，针对 LCUI 的特性仅开启了部分插件。
- `postcss.config.js`: [PostCSS](https://postcss.org/) 的配置文件。
- `version.rc`: 资源文件，用于描述 Windows 可执行文件的图标和信息。
- `logo.ico`: 图标文件，用于 Windows 可执行文件的图标。
- `tsconfig.json`: [TypeScript 配置文件](https://www.typescriptlang.org/docs/handbook/tsconfig-json.html)。

## 许可

[CC0 1.0 (Public Domain)](LICENSE.md)
