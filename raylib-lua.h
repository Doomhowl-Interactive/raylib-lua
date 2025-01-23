#pragma once
#include "raylib.h"

#ifdef __cplusplus
extern "C" {
#endif

#include <lauxlib.h>
#include <lua.h>
#include <lualib.h>

#define LuaPush_int(L, value) lua_pushinteger(L, value)
#define LuaPush_float(L, value) lua_pushnumber(L, value);
#define LuaPush_bool(L, value) lua_pushboolean(L, value)
#define LuaPush_string(L, value) lua_pushstring(L, value)

#define LuaPush_Image(L, img) LuaPushOpaqueTypeWithMetatable(L, img, Image)
#define LuaPush_Texture2D(L, tex) LuaPushOpaqueTypeWithMetatable(L, tex, Texture2D)
#define LuaPush_RenderTexture2D(L, tex) LuaPushOpaqueTypeWithMetatable(L, tex, RenderTexture2D)
#define LuaPush_Font(L, sf) LuaPushOpaqueTypeWithMetatable(L, sf, Font)
#define LuaPush_Mesh(L, vd) LuaPushOpaqueType(L, vd)
#define LuaPush_Shader(L, s) LuaPushOpaqueType(L, s)
#define LuaPush_Sound(L, snd) LuaPushOpaqueType(L, snd)
#define LuaPush_Wave(L, wav) LuaPushOpaqueType(L, wav)
#define LuaPush_Music(L, mus) LuaPushOpaqueType(L, mus)
#define LuaPush_AudioStream(L, aud) LuaPushOpaqueType(L, aud)
#define LuaPush_PhysicsBody(L, body) LuaPushOpaqueType(L, body)

#define LuaPushOpaqueType(L, str) LuaPushOpaque(L, &str, sizeof(str))
#define LuaPushOpaqueTypeWithMetatable(L, str, meta) LuaPushOpaqueWithMetatable(L, &str, sizeof(str), #meta)

    void LuaPushOpaque(lua_State* L, void* ptr, size_t size);
    void LuaPushOpaqueWithMetatable(lua_State* L, void* ptr, size_t size, const char* metatable_name);
    void* LuaGetArgumentOpaqueType(lua_State* L, int index);
    void* LuaGetArgumentOpaqueTypeWithMetatable(lua_State* L, int index, const char* metatable_name);

    void LuaPush_Color(lua_State* L, Color color);
    void LuaPush_Vector2(lua_State* L, Vector2 vec);
    void LuaPush_Vector3(lua_State* L, Vector3 vec);
    void LuaPush_Vector4(lua_State* L, Vector4 vec);
    void LuaPush_Quaternion(lua_State* L, Quaternion vec);
    void LuaPush_Matrix(lua_State* L, Matrix* matrix);
    void LuaPush_Rectangle(lua_State* L, Rectangle rect);
    void LuaPush_Camera(lua_State* L, Camera cam);
    void LuaPush_Camera2D(lua_State* L, Camera2D cam);
    void LuaPush_Model(lua_State* L, Model mdl);
    void LuaPush_Ray(lua_State* L, Ray ray);
    void LuaPush_RayCollision(lua_State* L, RayCollision hit);

#define LuaGetArgument_ptr (void*)luaL_checkinteger
#define LuaGetArgument_int (int)luaL_checkinteger
#define LuaGetArgument_bool LuaGetArgument_int
#define LuaGetArgument_unsigned (unsigned)luaL_checkinteger
#define LuaGetArgument_char (char)luaL_checkinteger
#define LuaGetArgument_float (float)luaL_checknumber
#define LuaGetArgument_double luaL_checknumber
#define LuaGetArgument_string luaL_checkstring

    Color LuaGetArgument_Color(lua_State* L, int index);
    Vector2 LuaGetArgument_Vector2(lua_State* L, int index);
    Vector3 LuaGetArgument_Vector3(lua_State* L, int index);
    Vector4 LuaGetArgument_Vector4(lua_State* L, int index);
    Quaternion LuaGetArgument_Quaternion(lua_State* L, int index);
    Matrix LuaGetArgument_Matrix(lua_State* L, int index);
    Rectangle LuaGetArgument_Rectangle(lua_State* L, int index);
    Camera LuaGetArgument_Camera(lua_State* L, int index);
    Camera2D LuaGetArgument_Camera2D(lua_State* L, int index);
    Model LuaGetArgument_Model(lua_State* L, int index);
    Ray LuaGetArgument_Ray(lua_State* L, int index);

#ifdef __cplusplus
}
#endif
