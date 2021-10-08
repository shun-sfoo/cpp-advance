# 构建工具

## cmake

## ninja

## python(pyenv)

or miniconda

## eigen

线性代数模板库

boost

`cmake -H. -Bbuild`
`-H` 表示在当前目录搜索 `CMakeLists.txt`
`-Bbuild` 在 build 中生成所有的文件

`cmake -H. -Bbuild -GNinja`

### option

option 提供给用户设置参数的值

`option(<option_variable> "help string" [initial value])`
分别表示变量名称， 帮助提示，默认值.
