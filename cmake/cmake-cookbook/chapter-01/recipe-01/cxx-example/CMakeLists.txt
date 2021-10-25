# 1. 低于该版本发出致命错误
cmake_minimum_required(VERSION 3.5 FATAL_ERROR) 

# 2. 声明项目名称和支持编程语言
project(recipe-01 LANGUAGES CXX)

# 3. 指示 cmake 创建一个新目标可执行文件：hello-world
# 通过链接和编译源文件 hello-world.cpp 生成
add_executable(hello-world hello-world.cpp)

# NOTE: cmake 语言不区分大小写，但参数区分

