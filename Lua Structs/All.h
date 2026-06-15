#pragma once

#include <cstddef>
#include <cstdint>

typedef uint32_t Instruction;

typedef struct TString
{
} TString;

typedef struct LuaTable
{
} LuaTable;

typedef struct Proto
{
} Proto;

typedef struct Closure
{
} Closure;

typedef struct global_State
{
    uint8_t pad_0000[0x18];
    GCObject* grayagain; // 0x18 ( 24 )
    uint8_t pad_0001[0x50];
    lua_State* mainthread; // 0x70 ( 112 )
    uint8_t pad_0002[0x438];
    TValue pseudotemp; // 0x4B0 ( 1200 )
    uint8_t pad_0003[0x8];
    TValue registry; // 0x4C0 ( 1216 )
} global_State;

typedef struct stringtable
{
} stringtable;

struct lua_Callbacks
{
};

typedef struct CallInfo
{
    uint8_t pad_0000[0x8];
    StkId func; // 0x8 ( 8 )
} CallInfo;

typedef struct RobloxExtraSpace
{
} RobloxExtraSpace;

struct lua_State
{
    uint8_t pad_0000[0x18];
    CallInfo* base_ci; // 0x18 ( 24 )
    uint8_t pad_0001[0x8];
    global_State* global; // 0x28 ( 40 )
    StkId base; // 0x30 ( 48 )
    StkId top; // 0x38 ( 56 )
    uint8_t pad_0002[0x8];
    CallInfo* ci; // 0x48 ( 72 )
    uint8_t pad_0003[0x10];
    LuaTable* gt; // 0x60 ( 96 )
    RobloxExtraSpace* userdata; // 0x68 ( 104 )
};

typedef struct lua_Page
{
} lua_Page;

