### APIs

A variety of interfaces are available to customize the compilation process.
Some features overlap between interfaces, e.g. a configuration option may be
available via a CLI flag, while others exist only through a single interface.
The following high-level information should get you started.


## CLI

The Command Line Interface (CLI) to configure and interact with your build. It
is especially useful in the case of early prototyping and profiling. For the
most part, the CLI is simply used to kick off the process using a configuration
file and a few flags (e.g. `--env`).

[Learn more about the CLI!](/api/cli)


## Module

When processing modules with webpack, it is important to understand the
different module syntaxes -- specifically the [methods](/api/module-methods)
and [variables](/api/module-variables) -- that are supported.

[Learn more about modules!](/api/module-methods)


## Node

While most users can get away with just using the CLI along with a
configuration file, more fine-grained control of the compilation can be
achieved via the Node interface. This includes passing multiple configurations,
programmatically running or watching, and collecting stats.

[Learn more about the Node API!](/api/node)


## Loaders

Loaders are transformations that are applied to the source code of a module.
They are written as functions that accept source code as a parameter and return
a new version of that code with transformations applied.

[Learn more about loaders!](/api/loaders)


## Plugins

The plugin interface allows users to tap directly into the compilation process.
Plugins can register handlers on lifecycle hooks that run at different points
throughout a compilation. When each hook is executed, the plugin will have full
access to the current state of the compilation.

[Learn more about plugins!](/api/plugins)


## Errors and Warnings

The `errors` and `warnings` properties each contain a list of objects. Each object contains a message, a stack trace and various other properties:
```json
{
  "moduleIdentifier": "C:\\Repos\\webpack\\test\\cases\\context\\issue-5750\\index.js",
  "moduleName": "(webpack)/test/cases/context/issue-5750/index.js",
  "loc": "3:8-47",
  "message": "Critical dependency: Contexts can't use RegExps with the 'g' or 'y' flags.",
  "moduleId": 29595,
  "moduleTrace": [
    {
      "originIdentifier": "C:\\Repos\\webpack\\test\\cases|sync|/^\\.\\/[^/]+\\/[^/]+\\/index\\.js$/",
      "originName": "(webpack)/test/cases sync ^\\.\\/[^/]+\\/[^/]+\\/index\\.js$",
      "moduleIdentifier": "C:\\Repos\\webpack\\test\\cases\\context\\issue-5750\\index.js",
      "moduleName": "(webpack)/test/cases/context/issue-5750/index.js",
      "dependencies": [
        {
          "loc": "./context/issue-5750/index.js"
        }
      ],
      "originId": 32582,
      "moduleId": 29595
    },
    {
      "originIdentifier": "C:\\Repos\\webpack\\testCases.js",
      "originName": "(webpack)/testCases.js",
      "moduleIdentifier": "C:\\Repos\\webpack\\test\\cases|sync|/^\\.\\/[^/]+\\/[^/]+\\/index\\.js$/",
      "moduleName": "(webpack)/test/cases sync ^\\.\\/[^/]+\\/[^/]+\\/index\\.js$",
      "dependencies": [
        {
          "loc": "1:0-70"
        }
      ],
      "originId": 8198,
      "moduleId": 32582
    }
  ],
  "details": "    at RequireContextDependency.getWarnings (C:\\Repos\\webpack\\lib\\dependencies\\ContextDependency.js:79:5)\n    at Compilation.reportDependencyErrorsAndWarnings (C:\\Repos\\webpack\\lib\\Compilation.js:1727:24)\n    at C:\\Repos\\webpack\\lib\\Compilation.js:1467:10\n    at _next2 (<anonymous>:16:1)\n    at eval (<anonymous>:42:1)\n    at C:\\Repos\\webpack\\node_modules\\neo-async\\async.js:2830:7\n    at Object.each (C:\\Repos\\webpack\\node_modules\\neo-async\\async.js:2850:39)\n    at C:\\Repos\\webpack\\lib\\FlagDependencyExportsPlugin.js:219:18\n    at C:\\Repos\\webpack\\node_modules\\neo-async\\async.js:2830:7\n    at Object.each (C:\\Repos\\webpack\\node_modules\\neo-async\\async.js:2850:39)\n    at C:\\Repos\\webpack\\lib\\FlagDependencyExportsPlugin.js:40:16\n    at Hook.eval [as callAsync] (<anonymous>:38:1)\n    at Hook.CALL_ASYNC_DELEGATE [as _callAsync] (C:\\Repos\\tapable\\lib\\Hook.js:18:14)\n    at Compilation.finish (C:\\Repos\\webpack\\lib\\Compilation.js:1462:28)\n    at C:\\Repos\\webpack\\lib\\Compiler.js:909:18\n    at processTicksAndRejections (internal/process/task_queues.js:75:11)\n",
  "stack": "ModuleDependencyWarning: Critical dependency: Contexts can't use RegExps with the 'g' or 'y' flags.\n    at Compilation.reportDependencyErrorsAndWarnings (C:\\Repos\\webpack\\lib\\Compilation.js:1732:23)\n    at C:\\Repos\\webpack\\lib\\Compilation.js:1467:10\n    at _next2 (<anonymous>:16:1)\n    at eval (<anonymous>:42:1)\n    at C:\\Repos\\webpack\\node_modules\\neo-async\\async.js:2830:7\n    at Object.each (C:\\Repos\\webpack\\node_modules\\neo-async\\async.js:2850:39)\n    at C:\\Repos\\webpack\\lib\\FlagDependencyExportsPlugin.js:219:18\n    at C:\\Repos\\webpack\\node_modules\\neo-async\\async.js:2830:7\n    at Object.each (C:\\Repos\\webpack\\node_modules\\neo-async\\async.js:2850:39)\n    at C:\\Repos\\webpack\\lib\\FlagDependencyExportsPlugin.js:40:16\n    at Hook.eval [as callAsync] (<anonymous>:38:1)\n    at Hook.CALL_ASYNC_DELEGATE [as _callAsync] (C:\\Repos\\tapable\\lib\\Hook.js:18:14)\n    at Compilation.finish (C:\\Repos\\webpack\\lib\\Compilation.js:1462:28)\n    at C:\\Repos\\webpack\\lib\\Compiler.js:909:18\n    at processTicksAndRejections (internal/process/task_queues.js:75:11)\n"
}
```
W> Note that the stack traces are removed when `errorStack: false` is passed to the `toJson` method. The `errorStack` option is set to `true` by default.
