const { spawnSync } = require('child_process')

module.exports = {
  name: 'cmake',
  test: 'cmake --version',
  configure(options) {
    const params = ['../']

    if (options.platform === 'windows') {
      params.push('-DCMAKE_GENERATOR_PLATFORM=x64', '-T', 'v141_xp')
    }
    return spawnSync('cmake', params, { stdio: 'inherit', cwd: options.buildDir })
  },
  build(options) {
    return spawnSync('cmake', ['--build', '.'], { stdio: 'inherit', cwd: options.buildDir })
  },
  run(options) {
    return spawnSync(options.targetPath, { stdio: 'inherit', cwd: options.targetDir })
  }
}
