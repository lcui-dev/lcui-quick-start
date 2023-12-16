# 快速上手示例

[![C/C++ CI](https://github.com/lcui-dev/lcui-quick-start/actions/workflows/ccpp.yml/badge.svg)](https://github.com/lcui-dev/lcui-quick-start/actions/workflows/ccpp.yml)

([English](README.md)/**中文**)

**克隆并运行以快速查看LCUI的运行方式。**

## 使用

在克隆和运行这个仓库之前，你需要在你的计算机上安装:

- [Git](https://git-scm.com)：版本管理工具
- [Node.js](https://nodejs.org/en/download/) (自带 [npm](http://npmjs.com))：JavaScript 运行环境
- [XMake](https://xmake.io/)：构建工具

之后，运行以下命令：

```bash
# 安装命令行工具
npm install -g @lcui/cli

# 创建项目
lcui create my-lcui-app
```

## 包含什么

- 一些资源文件。
- [XMake](https://xmake.io/) 的配置文件。
- 简单的数据存储操作实现，在 `src/lib/store.c` 中可找到。
- 用于描述用户界面样式的 [.scss](https://sass-lang.com/guide) 文件。
- 用于描述用户界面结构的 tsx 文件。你可以参考它使用 TypeScript 语言和 React 库编写无状态组件。
- 用于显示应用程序信息的 `about` 组件。
- 实现了简单布局和交互的 `home` 页面。

## 项目结构

- **`app`**: 包含应用程序运行所需的资源文件。你可以将它当成应用程序的工作目录，在发布应用程序时你只需要打包这个目录内的文件。
- **`build`**: 包含构建工具输出的文件。
- **`src`**: 包含源代码。
  - **`assets`**: 包含资源文件。
  - **`style`**: 包含样式表的源代码。你可以将 [.scss](https://sass-lang.com/guide) 文件放到这里。
  - **`components`**: 包含组件的源代码。
  - **`pages`**: 包含页面的源代码。
  - **`lib`**: 包含基础库的源代码。

## 许可

[CC0 1.0 (Public Domain)](LICENSE.md)
