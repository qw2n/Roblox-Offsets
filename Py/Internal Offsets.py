# By BinaryCrypt

# Roblox Version: version-76173e47a79145c7
# Dumper Version: 1.0.1.0 - Beta
# Time taken: 0.434246s 
# Offsets count: 125

class Misc:
    currfuncname = 0x4538520
    getfunc = 0x454D820
    idk1 = 0x453D110
    idk2 = 0x453E4F0
    propagatemark = 0x453CA60
    pseudo2addr = 0x45368A0
    strtoull = 0x0
    tag_error = 0x4539F10

class Roblox:
    CastArgs = 0x1C91ED0
    CheckCapabilites = 0x45ABA10
    CheckIsCoreScript = 0x1D47580
    CheckRequireBypass = 0x1CB0010
    GetArgumentFromLuaStack = 0x1C96160
    GetCapabilities = 0x45AB650
    GetFunctionEnvironment = 0x1DC6770
    GetLuaStateExtraUserdata = 0x1210930
    GetMainThreadFromLuaState = 0x4533A30
    GetNullType = 0x45A8380
    GetRequireStack = 0x1CB0B40
    GetScriptContextFromLuaState = 0x1CB00D0
    GetValues = 0x1C92D00
    GetVmState = 0x61D5A0
    InitializeModuleScriptVmState = 0x1D47FF0
    IsInstance = 0x1D5EF10
    Print = 0x1E08380
    PushInstance = 0x1CA3840
    PushInstance2 = 0x1CA4FF0
    RequireModuleScript = 0x1CDD000
    ThrowCapabilityError = 0x45AD060
    j_GetMainThreadFromLuaState = 0x1CB0520

class lua:
    luaL_typename = 0x4539E10
    lua_clock = 0x45598B0
    lua_concat = 0x4532BE0
    lua_createtable = 0x4532D30
    lua_error = 0x4532F00
    lua_gc = 0x4532F10
    lua_getfenv = 0x4533150
    lua_getinfo = 0x453C3A0
    lua_getmetatable = 0x4533380
    lua_gettop = 0x45335B0
    lua_insert = 0x4533750
    lua_iscfunction = 0x4533870
    lua_isnumber = 0x45338E0
    lua_isstring = 0x4533950
    lua_newuserdatatagged = 0x4533C40
    lua_next = 0x4533DD0
    lua_objlen = 0x4533EC0
    lua_pushboolean = 0x4533F50
    lua_pushinteger = 0x45341D0
    lua_pushnil = 0x4534390
    lua_pushnumber = 0x0
    lua_pushstring = 0x4534470
    lua_pushthread = 0x4534590
    lua_pushvalue = 0x45346A0
    lua_rawequal = 0x45348D0
    lua_rawget = 0x45349A0
    lua_rawset = 0x4534EF0
    lua_setfenv = 0x4535700
    lua_setmetatable = 0x4535870
    lua_setsafeenv = 0x45359E0
    lua_settop = 0x4535AD0
    lua_toboolean = 0x4535D20
    lua_tolstring = 0x4535F10
    lua_tonumberx = 0x4536120
    lua_type = 0x4536550
    lua_typename = 0x45365B0

class luaC:
    luaC_barrierback = 0x453D3D0
    luaC_step = 0x453D620

class luaD:
    luaD_rawunprotected = 0x45376C0

class luaF:
    luaF_freeproto = 0x4563110

class luaI:
    luai_num2str = 0x456A630

class luaL:
    luaL_argerrorL = 0x4538A30
    luaL_checkany = 0x4538B20
    luaL_checkinteger = 0x4538C30
    luaL_checklstring = 0x0
    luaL_checktype = 0x4538D40
    luaL_errorL = 0x4538E00
    luaL_getmetafield = 0x4538F80
    luaL_optinteger = 0x4539150
    luaL_optlstring = 0x45391B0
    luaL_tolstring = 0x0
    luaL_where = 0x4539E40

class luaO:
    luaO_nilobject = 0x67AE440

class luaS:
    luaS_newlstr = 0x456A0D0

class luaV:
    luaV_tostring = 0x45659F0

class lua_Base:
    luaB_assert = 0x454D640
    luaB_error = 0x454D100
    luaB_gcinfo = 0x454D530
    luaB_getfenv = 0x454D290
    luaB_getmetatable = 0x454D170
    luaB_newproxy = 0x454D790
    luaB_next = 0x454D5E0
    luaB_print = 0x454CEE0
    luaB_rawequal = 0x454D3D0
    luaB_rawget = 0x454D420
    luaB_rawlen = 0x454D4D0
    luaB_rawset = 0x454D470
    luaB_select = 0x454D6B0
    luaB_setfenv = 0x454D2F0
    luaB_setmetatable = 0x454D1D0
    luaB_tonumber = 0x454CFC0
    luaB_tostring = 0x454D760
    luaB_type = 0x454D560
    luaB_typeof = 0x454D5A0

class lua_Open:
    base_funcs = 0x67ABFD0
    robloxbase_funcs = 0x5D0B610

class lua_RobloxBase:
    luaRB_PluginManager = 0x1DC6F90
    luaRB_UserSettings = 0x1DC7E60
    luaRB_collectgarbage = 0x1DC6240
    luaRB_delay = 0x1DC6580
    luaRB_elapsedTime = 0x1DC6740
    luaRB_getfenv = 0x1DC6900
    luaRB_loadstring = 0x1DC69D0
    luaRB_print = 0x1DC70C0
    luaRB_printidentity = 0x1DC70E0
    luaRB_require = 0x1DC71B0
    luaRB_setfenv = 0x1DC7740
    luaRB_settings = 0x1DC7890
    luaRB_spawn = 0x1DC79E0
    luaRB_stats = 0x1DC7BA0
    luaRB_tick = 0x1DC7D70
    luaRB_time = 0x1DC7DA0
    luaRB_version = 0x1DC7F50
    luaRB_wait = 0x1DC7FC0
    luaRB_warn = 0x1DC80D0

