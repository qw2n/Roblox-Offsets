#pragma once

// By BinaryCrypt

// Roblox Version: version-76173e47a79145c7
// Dumper Version: 1.0.1.0 - Beta
// Time taken: 0.434246s 
// Offsets count: 125

#include <cstdint>

namespace Offsets
{
    namespace Misc
    {
        inline constexpr uintptr_t currfuncname = 0x4538520;
        inline constexpr uintptr_t getfunc = 0x454D820;
        inline constexpr uintptr_t idk1 = 0x453D110;
        inline constexpr uintptr_t idk2 = 0x453E4F0;
        inline constexpr uintptr_t propagatemark = 0x453CA60;
        inline constexpr uintptr_t pseudo2addr = 0x45368A0;
        inline constexpr uintptr_t strtoull = 0x0;
        inline constexpr uintptr_t tag_error = 0x4539F10;
    }

    namespace Roblox
    {
        inline constexpr uintptr_t CastArgs = 0x1C91ED0;
        inline constexpr uintptr_t CheckCapabilites = 0x45ABA10;
        inline constexpr uintptr_t CheckIsCoreScript = 0x1D47580;
        inline constexpr uintptr_t CheckRequireBypass = 0x1CB0010;
        inline constexpr uintptr_t GetArgumentFromLuaStack = 0x1C96160;
        inline constexpr uintptr_t GetCapabilities = 0x45AB650;
        inline constexpr uintptr_t GetFunctionEnvironment = 0x1DC6770;
        inline constexpr uintptr_t GetLuaStateExtraUserdata = 0x1210930;
        inline constexpr uintptr_t GetMainThreadFromLuaState = 0x4533A30;
        inline constexpr uintptr_t GetNullType = 0x45A8380;
        inline constexpr uintptr_t GetRequireStack = 0x1CB0B40;
        inline constexpr uintptr_t GetScriptContextFromLuaState = 0x1CB00D0;
        inline constexpr uintptr_t GetValues = 0x1C92D00;
        inline constexpr uintptr_t GetVmState = 0x61D5A0;
        inline constexpr uintptr_t InitializeModuleScriptVmState = 0x1D47FF0;
        inline constexpr uintptr_t IsInstance = 0x1D5EF10;
        inline constexpr uintptr_t Print = 0x1E08380;
        inline constexpr uintptr_t PushInstance = 0x1CA3840;
        inline constexpr uintptr_t PushInstance2 = 0x1CA4FF0;
        inline constexpr uintptr_t RequireModuleScript = 0x1CDD000;
        inline constexpr uintptr_t ThrowCapabilityError = 0x45AD060;
        inline constexpr uintptr_t j_GetMainThreadFromLuaState = 0x1CB0520;
    }

    namespace lua
    {
        inline constexpr uintptr_t luaL_typename = 0x4539E10;
        inline constexpr uintptr_t lua_clock = 0x45598B0;
        inline constexpr uintptr_t lua_concat = 0x4532BE0;
        inline constexpr uintptr_t lua_createtable = 0x4532D30;
        inline constexpr uintptr_t lua_error = 0x4532F00;
        inline constexpr uintptr_t lua_gc = 0x4532F10;
        inline constexpr uintptr_t lua_getfenv = 0x4533150;
        inline constexpr uintptr_t lua_getinfo = 0x453C3A0;
        inline constexpr uintptr_t lua_getmetatable = 0x4533380;
        inline constexpr uintptr_t lua_gettop = 0x45335B0;
        inline constexpr uintptr_t lua_insert = 0x4533750;
        inline constexpr uintptr_t lua_iscfunction = 0x4533870;
        inline constexpr uintptr_t lua_isnumber = 0x45338E0;
        inline constexpr uintptr_t lua_isstring = 0x4533950;
        inline constexpr uintptr_t lua_newuserdatatagged = 0x4533C40;
        inline constexpr uintptr_t lua_next = 0x4533DD0;
        inline constexpr uintptr_t lua_objlen = 0x4533EC0;
        inline constexpr uintptr_t lua_pushboolean = 0x4533F50;
        inline constexpr uintptr_t lua_pushinteger = 0x45341D0;
        inline constexpr uintptr_t lua_pushnil = 0x4534390;
        inline constexpr uintptr_t lua_pushnumber = 0x0;
        inline constexpr uintptr_t lua_pushstring = 0x4534470;
        inline constexpr uintptr_t lua_pushthread = 0x4534590;
        inline constexpr uintptr_t lua_pushvalue = 0x45346A0;
        inline constexpr uintptr_t lua_rawequal = 0x45348D0;
        inline constexpr uintptr_t lua_rawget = 0x45349A0;
        inline constexpr uintptr_t lua_rawset = 0x4534EF0;
        inline constexpr uintptr_t lua_setfenv = 0x4535700;
        inline constexpr uintptr_t lua_setmetatable = 0x4535870;
        inline constexpr uintptr_t lua_setsafeenv = 0x45359E0;
        inline constexpr uintptr_t lua_settop = 0x4535AD0;
        inline constexpr uintptr_t lua_toboolean = 0x4535D20;
        inline constexpr uintptr_t lua_tolstring = 0x4535F10;
        inline constexpr uintptr_t lua_tonumberx = 0x4536120;
        inline constexpr uintptr_t lua_type = 0x4536550;
        inline constexpr uintptr_t lua_typename = 0x45365B0;
    }

    namespace luaC
    {
        inline constexpr uintptr_t luaC_barrierback = 0x453D3D0;
        inline constexpr uintptr_t luaC_step = 0x453D620;
    }

    namespace luaD
    {
        inline constexpr uintptr_t luaD_rawunprotected = 0x45376C0;
    }

    namespace luaF
    {
        inline constexpr uintptr_t luaF_freeproto = 0x4563110;
    }

    namespace luaI
    {
        inline constexpr uintptr_t luai_num2str = 0x456A630;
    }

    namespace luaL
    {
        inline constexpr uintptr_t luaL_argerrorL = 0x4538A30;
        inline constexpr uintptr_t luaL_checkany = 0x4538B20;
        inline constexpr uintptr_t luaL_checkinteger = 0x4538C30;
        inline constexpr uintptr_t luaL_checklstring = 0x0;
        inline constexpr uintptr_t luaL_checktype = 0x4538D40;
        inline constexpr uintptr_t luaL_errorL = 0x4538E00;
        inline constexpr uintptr_t luaL_getmetafield = 0x4538F80;
        inline constexpr uintptr_t luaL_optinteger = 0x4539150;
        inline constexpr uintptr_t luaL_optlstring = 0x45391B0;
        inline constexpr uintptr_t luaL_tolstring = 0x0;
        inline constexpr uintptr_t luaL_where = 0x4539E40;
    }

    namespace luaO
    {
        inline constexpr uintptr_t luaO_nilobject = 0x67AE440;
    }

    namespace luaS
    {
        inline constexpr uintptr_t luaS_newlstr = 0x456A0D0;
    }

    namespace luaV
    {
        inline constexpr uintptr_t luaV_tostring = 0x45659F0;
    }

    namespace lua_Base
    {
        inline constexpr uintptr_t luaB_assert = 0x454D640;
        inline constexpr uintptr_t luaB_error = 0x454D100;
        inline constexpr uintptr_t luaB_gcinfo = 0x454D530;
        inline constexpr uintptr_t luaB_getfenv = 0x454D290;
        inline constexpr uintptr_t luaB_getmetatable = 0x454D170;
        inline constexpr uintptr_t luaB_newproxy = 0x454D790;
        inline constexpr uintptr_t luaB_next = 0x454D5E0;
        inline constexpr uintptr_t luaB_print = 0x454CEE0;
        inline constexpr uintptr_t luaB_rawequal = 0x454D3D0;
        inline constexpr uintptr_t luaB_rawget = 0x454D420;
        inline constexpr uintptr_t luaB_rawlen = 0x454D4D0;
        inline constexpr uintptr_t luaB_rawset = 0x454D470;
        inline constexpr uintptr_t luaB_select = 0x454D6B0;
        inline constexpr uintptr_t luaB_setfenv = 0x454D2F0;
        inline constexpr uintptr_t luaB_setmetatable = 0x454D1D0;
        inline constexpr uintptr_t luaB_tonumber = 0x454CFC0;
        inline constexpr uintptr_t luaB_tostring = 0x454D760;
        inline constexpr uintptr_t luaB_type = 0x454D560;
        inline constexpr uintptr_t luaB_typeof = 0x454D5A0;
    }

    namespace lua_Open
    {
        inline constexpr uintptr_t base_funcs = 0x67ABFD0;
        inline constexpr uintptr_t robloxbase_funcs = 0x5D0B610;
    }

    namespace lua_RobloxBase
    {
        inline constexpr uintptr_t luaRB_PluginManager = 0x1DC6F90;
        inline constexpr uintptr_t luaRB_UserSettings = 0x1DC7E60;
        inline constexpr uintptr_t luaRB_collectgarbage = 0x1DC6240;
        inline constexpr uintptr_t luaRB_delay = 0x1DC6580;
        inline constexpr uintptr_t luaRB_elapsedTime = 0x1DC6740;
        inline constexpr uintptr_t luaRB_getfenv = 0x1DC6900;
        inline constexpr uintptr_t luaRB_loadstring = 0x1DC69D0;
        inline constexpr uintptr_t luaRB_print = 0x1DC70C0;
        inline constexpr uintptr_t luaRB_printidentity = 0x1DC70E0;
        inline constexpr uintptr_t luaRB_require = 0x1DC71B0;
        inline constexpr uintptr_t luaRB_setfenv = 0x1DC7740;
        inline constexpr uintptr_t luaRB_settings = 0x1DC7890;
        inline constexpr uintptr_t luaRB_spawn = 0x1DC79E0;
        inline constexpr uintptr_t luaRB_stats = 0x1DC7BA0;
        inline constexpr uintptr_t luaRB_tick = 0x1DC7D70;
        inline constexpr uintptr_t luaRB_time = 0x1DC7DA0;
        inline constexpr uintptr_t luaRB_version = 0x1DC7F50;
        inline constexpr uintptr_t luaRB_wait = 0x1DC7FC0;
        inline constexpr uintptr_t luaRB_warn = 0x1DC80D0;
    }

}