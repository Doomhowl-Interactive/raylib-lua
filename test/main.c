// Check if the header compiles with implement define
#define RAYLIB_LUA_IMPLEMENTATION
#include "raylib-lua.h"

extern void whatever();
int main(int argc, char **argv)
{
    whatever();
    return 0;
}