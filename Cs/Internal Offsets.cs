// By BinaryCrypt

// Roblox Version: version-76173e47a79145c7
// Dumper Version: 1.0.1.0 - Beta
// Time taken: 0.434246s 
// Offsets count: 125

namespace Offsets;

public static class OffsetsClass
{

    public static class Misc
    {
        public const nint currfuncname = 0x4538520;
        public const nint getfunc = 0x454D820;
        public const nint idk1 = 0x453D110;
        public const nint idk2 = 0x453E4F0;
        public const nint propagatemark = 0x453CA60;
        public const nint pseudo2addr = 0x45368A0;
        public const nint strtoull = 0x0;
        public const nint tag_error = 0x4539F10;
    }

    public static class Roblox
    {
        public const nint CastArgs = 0x1C91ED0;
        public const nint CheckCapabilites = 0x45ABA10;
        public const nint CheckIsCoreScript = 0x1D47580;
        public const nint CheckRequireBypass = 0x1CB0010;
        public const nint GetArgumentFromLuaStack = 0x1C96160;
        public const nint GetCapabilities = 0x45AB650;
        public const nint GetFunctionEnvironment = 0x1DC6770;
        public const nint GetLuaStateExtraUserdata = 0x1210930;
        public const nint GetMainThreadFromLuaState = 0x4533A30;
        public const nint GetNullType = 0x45A8380;
        public const nint GetRequireStack = 0x1CB0B40;
        public const nint GetScriptContextFromLuaState = 0x1CB00D0;
        public const nint GetValues = 0x1C92D00;
        public const nint GetVmState = 0x61D5A0;
        public const nint InitializeModuleScriptVmState = 0x1D47FF0;
        public const nint IsInstance = 0x1D5EF10;
        public const nint Print = 0x1E08380;
        public const nint PushInstance = 0x1CA3840;
        public const nint PushInstance2 = 0x1CA4FF0;
        public const nint RequireModuleScript = 0x1CDD000;
        public const nint ThrowCapabilityError = 0x45AD060;
        public const nint j_GetMainThreadFromLuaState = 0x1CB0520;
    }

    public static class lua
    {
        public const nint luaL_typename = 0x4539E10;
        public const nint lua_clock = 0x45598B0;
        public const nint lua_concat = 0x4532BE0;
        public const nint lua_createtable = 0x4532D30;
        public const nint lua_error = 0x4532F00;
        public const nint lua_gc = 0x4532F10;
        public const nint lua_getfenv = 0x4533150;
        public const nint lua_getinfo = 0x453C3A0;
        public const nint lua_getmetatable = 0x4533380;
        public const nint lua_gettop = 0x45335B0;
        public const nint lua_insert = 0x4533750;
        public const nint lua_iscfunction = 0x4533870;
        public const nint lua_isnumber = 0x45338E0;
        public const nint lua_isstring = 0x4533950;
        public const nint lua_newuserdatatagged = 0x4533C40;
        public const nint lua_next = 0x4533DD0;
        public const nint lua_objlen = 0x4533EC0;
        public const nint lua_pushboolean = 0x4533F50;
        public const nint lua_pushinteger = 0x45341D0;
        public const nint lua_pushnil = 0x4534390;
        public const nint lua_pushnumber = 0x0;
        public const nint lua_pushstring = 0x4534470;
        public const nint lua_pushthread = 0x4534590;
        public const nint lua_pushvalue = 0x45346A0;
        public const nint lua_rawequal = 0x45348D0;
        public const nint lua_rawget = 0x45349A0;
        public const nint lua_rawset = 0x4534EF0;
        public const nint lua_setfenv = 0x4535700;
        public const nint lua_setmetatable = 0x4535870;
        public const nint lua_setsafeenv = 0x45359E0;
        public const nint lua_settop = 0x4535AD0;
        public const nint lua_toboolean = 0x4535D20;
        public const nint lua_tolstring = 0x4535F10;
        public const nint lua_tonumberx = 0x4536120;
        public const nint lua_type = 0x4536550;
        public const nint lua_typename = 0x45365B0;
    }

    public static class luaC
    {
        public const nint luaC_barrierback = 0x453D3D0;
        public const nint luaC_step = 0x453D620;
    }

    public static class luaD
    {
        public const nint luaD_rawunprotected = 0x45376C0;
    }

    public static class luaF
    {
        public const nint luaF_freeproto = 0x4563110;
    }

    public static class luaI
    {
        public const nint luai_num2str = 0x456A630;
    }

    public static class luaL
    {
        public const nint luaL_argerrorL = 0x4538A30;
        public const nint luaL_checkany = 0x4538B20;
        public const nint luaL_checkinteger = 0x4538C30;
        public const nint luaL_checklstring = 0x0;
        public const nint luaL_checktype = 0x4538D40;
        public const nint luaL_errorL = 0x4538E00;
        public const nint luaL_getmetafield = 0x4538F80;
        public const nint luaL_optinteger = 0x4539150;
        public const nint luaL_optlstring = 0x45391B0;
        public const nint luaL_tolstring = 0x0;
        public const nint luaL_where = 0x4539E40;
    }

    public static class luaO
    {
        public const nint luaO_nilobject = 0x67AE440;
    }

    public static class luaS
    {
        public const nint luaS_newlstr = 0x456A0D0;
    }

    public static class luaV
    {
        public const nint luaV_tostring = 0x45659F0;
    }

    public static class lua_Base
    {
        public const nint luaB_assert = 0x454D640;
        public const nint luaB_error = 0x454D100;
        public const nint luaB_gcinfo = 0x454D530;
        public const nint luaB_getfenv = 0x454D290;
        public const nint luaB_getmetatable = 0x454D170;
        public const nint luaB_newproxy = 0x454D790;
        public const nint luaB_next = 0x454D5E0;
        public const nint luaB_print = 0x454CEE0;
        public const nint luaB_rawequal = 0x454D3D0;
        public const nint luaB_rawget = 0x454D420;
        public const nint luaB_rawlen = 0x454D4D0;
        public const nint luaB_rawset = 0x454D470;
        public const nint luaB_select = 0x454D6B0;
        public const nint luaB_setfenv = 0x454D2F0;
        public const nint luaB_setmetatable = 0x454D1D0;
        public const nint luaB_tonumber = 0x454CFC0;
        public const nint luaB_tostring = 0x454D760;
        public const nint luaB_type = 0x454D560;
        public const nint luaB_typeof = 0x454D5A0;
    }

    public static class lua_Open
    {
        public const nint base_funcs = 0x67ABFD0;
        public const nint robloxbase_funcs = 0x5D0B610;
    }

    public static class lua_RobloxBase
    {
        public const nint luaRB_PluginManager = 0x1DC6F90;
        public const nint luaRB_UserSettings = 0x1DC7E60;
        public const nint luaRB_collectgarbage = 0x1DC6240;
        public const nint luaRB_delay = 0x1DC6580;
        public const nint luaRB_elapsedTime = 0x1DC6740;
        public const nint luaRB_getfenv = 0x1DC6900;
        public const nint luaRB_loadstring = 0x1DC69D0;
        public const nint luaRB_print = 0x1DC70C0;
        public const nint luaRB_printidentity = 0x1DC70E0;
        public const nint luaRB_require = 0x1DC71B0;
        public const nint luaRB_setfenv = 0x1DC7740;
        public const nint luaRB_settings = 0x1DC7890;
        public const nint luaRB_spawn = 0x1DC79E0;
        public const nint luaRB_stats = 0x1DC7BA0;
        public const nint luaRB_tick = 0x1DC7D70;
        public const nint luaRB_time = 0x1DC7DA0;
        public const nint luaRB_version = 0x1DC7F50;
        public const nint luaRB_wait = 0x1DC7FC0;
        public const nint luaRB_warn = 0x1DC80D0;
    }
}
