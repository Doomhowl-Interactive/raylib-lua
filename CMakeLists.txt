cmake_minimum_required(VERSION 3.20)
project(raylib-lua)

add_library(${PROJECT_NAME} STATIC
  raylib-lua.c
  raylib-lua.h
)

target_link_libraries(${PROJECT_NAME} PUBLIC
  raylib
  lua
)
