cmake_minimum_required(VERSION 3.10)
project(raylib-lua-test)

include(FetchContent)
FetchContent_Declare(
    raylib
    GIT_REPOSITORY "https://github.com/raysan5/raylib.git"
    GIT_TAG "5.5"
    GIT_PROGRESS TRUE
    GIT_SHALLOW TRUE
)
FetchContent_MakeAvailable(raylib)

FetchContent_Declare(
    lua
    GIT_REPOSITORY "https://github.com/walterschell/Lua.git"
    GIT_TAG "v5.4.5"
    GIT_PROGRESS TRUE
    GIT_SHALLOW TRUE
)
FetchContent_MakeAvailable(lua)

add_executable(${PROJECT_NAME}
    main.c
    noimpl.c
)

target_link_libraries(${PROJECT_NAME} PRIVATE
    raylib-lua

    raylib
    lua_shared
)