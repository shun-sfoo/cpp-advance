cmake_minimum_required(VERSION 3.5 FATAL_ERROR) 

project(recipe-03 LANGUAGES CXX)

# 1 创建目标 静态库
add_library(message-objs
  OBJECT
    Message.hpp
    Message.cpp
  )

add_library(message-shared
  SHARED
  $<TARGET_OBJECTS:message-objs>
  )


set_target_properties(message-shared
  PROPERTIES
    OUTPUT_NAME "message"
  )

add_library(message-static
  STATIC
  $<TARGET_OBJECTS:message-objs>
  )


set_target_properties(message-static
  PROPERTIES
    OUTPUT_NAME "message"
  )

add_executable(hello-world hello-world.cpp)

# 2 目标库连接到可执行目标
target_link_libraries(hello-world message-static)

