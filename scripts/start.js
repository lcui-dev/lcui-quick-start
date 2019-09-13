const fs = require('fs');
const path = require('path');
const { execSync, spawnSync } = require('child_process');

const logger = require('./logger');
const pkg = require('../lcpkg.json');

const TARGET_NAME = 'app'
const ROOT_DIR =  path.resolve(__dirname, '..')
const BUILD_DIR = path.join(ROOT_DIR, 'build')
const TARGET_DIR = path.join(ROOT_DIR, 'app')
const TARGET_PATH = path.join(TARGET_DIR, TARGET_NAME)

class XMake {
  constructor() {
    this.name = 'XMake'
  }

  configure() {
    const result = spawnSync('xmake', ['config'], { stdio: 'inherit', cwd: ROOT_DIR })

    return result.status
  }

  build() {
    const result = spawnSync('xmake', ['build'], { stdio: 'inherit', cwd: ROOT_DIR })

    return result.status
  }

  run() {
    const result = spawnSync('xmake', ['run'], { stdio: 'inherit', cwd: ROOT_DIR })

    return result.status
  }
}

class CMake {
  constructor() {
    this.name = 'CMake'
  }

  configure() {
    const result = spawnSync('cmake', ['../'], { stdio: 'inherit', cwd: BUILD_DIR })

    return result.status
  }

  build() {
    const result = spawnSync('make', { stdio: 'inherit', cwd: BUILD_DIR })

    return result.status
  }

  run() {
    const result = spawnSync(TARGET_PATH, { stdio: 'inherit', cwd: TARGET_DIR })

    return result.status
  }
}

async function detectBuildTool() {
  const tools = ['cmake', 'xmake'];

  for (let tool of tools) {
    try {
      const stdout = execSync(`${tool} --version`, { encoding: 'utf-8' });

      if (stdout) {
        if (tool === 'cmake') {
          return new CMake();
        }
        if (tool === 'xmake') {
          return new XMake();
        }
      }
    } catch (err) {
      continue;
    }
  }
  return null;
}

function bootstrap() {
  const files = ['include/version.h', 'CMakeLists.txt'];
  const info = { ...pkg, build_time: new Date().toISOString() };
  const keys = Object.keys(info);
  const regs = keys.map(k => new RegExp(`{{${k}}}`, 'g'));

  if (!fs.existsSync(BUILD_DIR)) {
    fs.mkdirSync(BUILD_DIR);
  }
  files.forEach((f) => {
    let content = fs.readFileSync(`${f}.in`, { encoding: 'utf-8' });
    regs.forEach((reg, i) => {
      content = content.replace(reg, info[keys[i]]);
    });
    fs.writeFileSync(f, content);
  });
}

function buildCSS() {
  logger.log('build stylesheets...');
  execSync(
    'npx node-sass --output app/assets/stylesheets --output-style expanded src/ui/stylesheets/app.scss',
    { stdio: 'inherit', cwd: ROOT_DIR }
  );
}

async function start() {
  const tool = await detectBuildTool();

  if (!tool) {
    logger.error('the build tool was not found! currently supports cmake and xmake, please install one of them.');
    return;
  }
  bootstrap();
  buildCSS();
  logger.log(`build tool is ${tool.name}`);
  tool.configure();
  tool.build();
  tool.run();
}

start();
