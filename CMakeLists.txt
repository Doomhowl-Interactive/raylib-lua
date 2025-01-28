cmake_minimum_required(VERSION 3.10)
project(raylib-lua VERSION 1.0.0 LANGUAGES C)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_library(${PROJECT_NAME} INTERFACE
    ./include/raylib-lua.h
)

target_include_directories(${PROJECT_NAME} INTERFACE
    ./include
)

option(RAYLIB_LUA_BUILD_TEST "Build the test executable" OFF)
if (RAYLIB_LUA_BUILD_TEST)
    message(STATUS "Building raylib-lua test executable")
    add_subdirectory(test)
endif()
