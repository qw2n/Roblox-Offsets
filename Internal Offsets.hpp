// By BinaryCrypt (Aka Qwar1e)
// GitHub: https://github.com/qw2n/Roblox-Offsets
// Time Taken: 4.678513s
// Total Offsets: 149

#pragma once

#include <string>
#include <cstdint>

namespace Offsets {
    inline std::string RobloxVersion = "version-acc4b74f79e743b9";

    namespace Misc {
        inline const uintptr_t close_state = 0x43973A0; // (sub)
        inline const uintptr_t reallymarkobject = 0x43A17D0; // (sub)
        inline const uintptr_t deletegco = 0x43A2D00; // (sub)
        inline const uintptr_t freeobj = 0x43A28C0; // (sub)
        inline const uintptr_t freeblock = 0x43EF460; // (sub)
        inline const uintptr_t extendstrbuf = 0x439EBA0; // (sub)
        inline const uintptr_t index2addr = 0x4391100; // (sub)
        inline const uintptr_t newgcoblock = 0x43EF3C0; // (sub)
        inline const uintptr_t newclasspage = 0x43EF210; // (sub)
        inline const uintptr_t newpage = 0x43EF160; // (sub)
        inline const uintptr_t gcstep = 0x43A33F0; // (sub)
        inline const uintptr_t CallContext_Run = 0x43A2B30; // (sub)
        inline const uintptr_t newblock = 0x43EF320; // (sub)
        inline const uintptr_t atomic = 0x43A2F80; // (sub)
        inline const uintptr_t markmt = 0x43A2D20; // (sub)
        inline const uintptr_t gettablemode = 0x43A18E0; // (sub)
        inline const uintptr_t strchr = 0x561147C; // (sub)
        inline const uintptr_t propagatemark = 0x43A2250; // (sub)
        inline const uintptr_t traversestack = 0x43A1B40; // (sub)
        inline const uintptr_t traversetable = 0x43A1990; // (sub)
        inline const uintptr_t markroot = 0x43A2E40; // (sub)
        inline const uintptr_t getheaptriggererroroffset = 0x43A15E0; // (sub)
        inline const uintptr_t tag_error = 0x4398B80; // (sub)
        inline const uintptr_t currfuncname = 0x4398990; // (sub)
        inline const uintptr_t vsnprintf = 0x7E3330; // (sub)
        inline const uintptr_t pusherror = 0x43A4240; // (sub)
        inline const uintptr_t currentline = 0x43A3C60; // (sub)
        inline const uintptr_t strtod = 0x56316D8; // (sub)
        inline const uintptr_t loadsafe = 0x43A5730; // (sub)
    } // namespace Misc

    namespace Roblox {
        inline const uintptr_t GetLuaState = 0x1C4BAD0; // (sub)
        inline const uintptr_t OpcodeLookupTable = 0x646C630; // (unk)
        inline const uintptr_t RbxCrash = 0x4788A30; // (sub)
        inline const uintptr_t GetGlobalState = 0x1D4BB50; // (sub)
        inline const uintptr_t GetTlsPointer = 0x9060; // (sub)
        inline const uintptr_t Print = 0x1E21AD0; // (sub)
        inline const uintptr_t LuaVM_Load = 0x1C81E80; // (sub)
    } // namespace Roblox

    namespace lua {
        inline const uintptr_t lua_newstate = 0x4397A50; // (sub)
        inline const uintptr_t lua_xmove = 0x4391940; // (sub)
        inline const uintptr_t lua_clock = 0x43EF090; // (sub)
        inline const uintptr_t lua_typename = 0x4391C50; // (sub)
        inline const uintptr_t lua_rawcheckstack = 0x4391620; // (sub)
    } // namespace lua

    namespace luaA {
        inline const uintptr_t luaA_toobject = 0x43911C0; // (sub)
    } // namespace luaA

    namespace luaC {
        inline const uintptr_t luaC_step = 0x43A36C0; // (sub)
    } // namespace luaC

    namespace luaD {
        inline const uintptr_t luaD_rawunprotected = 0x4393810; // (sub)
        inline const uintptr_t luaD_throw = 0x4393840; // (sub)
    } // namespace luaD

    namespace luaF {
        inline const uintptr_t luaF_freeproto = 0x43FED80; // (sub)
    } // namespace luaF

    namespace luaG {
        inline const uintptr_t luaG_runerrorL = 0x43A4740; // (sub)
    } // namespace luaG

    namespace luaH {
        inline const uintptr_t luaH_dummynode = 0x5F518C8; // (unk)
    } // namespace luaH

    namespace luaI {
        inline const uintptr_t luai_num2str = 0x4408340; // (sub)
        inline const uintptr_t luai_veceq = 0x861AD0; // (sub)
    } // namespace luaI

    namespace luaL {
        inline const uintptr_t luaL_register = 0x439C0A0; // (sub)
        inline const uintptr_t luaL_findtable = 0x439CF80; // (sub)
        inline const uintptr_t luaL_traceback = 0x439E1D0; // (sub)
        inline const uintptr_t luaL_pushresult = 0x439F3B0; // (sub)
        inline const uintptr_t luaL_errorL = 0x4399500; // (sub)
        inline const uintptr_t luaL_optlstring = 0x439A980; // (sub)
        inline const uintptr_t luaL_checklstring = 0x439A830; // (sub)
        inline const uintptr_t luaL_typeerrorL = 0x4398A90; // (sub)
        inline const uintptr_t luaL_argerrorL = 0x4398A10; // (sub)
    } // namespace luaL

    namespace luaM {
        inline const uintptr_t luaM_freegco_ = 0x43EF5A0; // (sub)
        inline const uintptr_t luaM_visitgco = 0x43EF6C0; // (sub)
        inline const uintptr_t luaM_free_ = 0x43EF520; // (sub)
        inline const uintptr_t luaM_toobig = 0x43EF130; // (sub)
    } // namespace luaM

    namespace luaO {
        inline const uintptr_t luaO_nilobject = 0x5F52318; // (unk)
        inline const uintptr_t luaO_chunkid = 0x44063A0; // (sub)
        inline const uintptr_t luaO_pushfstring = 0x4406370; // (sub)
        inline const uintptr_t luaO_pushvfstring = 0x4405C70; // (sub)
        inline const uintptr_t luaO_str2d = 0x4405BC0; // (sub)
    } // namespace luaO

    namespace luaS {
        inline const uintptr_t luaS_buffinish = 0x4407D20; // (sub)
    } // namespace luaS

    namespace luaT {
        inline const uintptr_t luaT_objtypename = 0x43FE8A0; // (sub)
        inline const uintptr_t luaT_objtypenamestr = 0x43FE710; // (sub)
    } // namespace luaT

    namespace luaU {
        inline const uintptr_t luau_executeNoSingleStep = 0x43B75A0; // (sub)
        inline const uintptr_t luau_execute = 0x43AD490; // (sub)
        inline const uintptr_t luau_executeSingleStep = 0x43AD540; // (sub)
    } // namespace luaU

    namespace luaV {
        inline const uintptr_t luaV_tostring = 0x43EF7F0; // (sub)
    } // namespace luaV

    namespace lua_Base {
        inline const uintptr_t luaB_assert = 0x43CB3E0; // (sub)
        inline const uintptr_t luaB_error = 0x43C6A50; // (sub)
        inline const uintptr_t luaB_gcinfo = 0x43CA0F0; // (sub)
        inline const uintptr_t luaB_getfenv = 0x43C7D90; // (sub)
        inline const uintptr_t luaB_getmetatable = 0x43C7340; // (sub)
        inline const uintptr_t luaB_next = 0x43CAAE0; // (sub)
        inline const uintptr_t luaB_newproxy = 0x43CD8C0; // (sub)
        inline const uintptr_t luaB_print = 0x43C66C0; // (sub)
        inline const uintptr_t luaB_rawequal = 0x43C8020; // (sub)
        inline const uintptr_t luaB_rawget = 0x43C80D0; // (sub)
        inline const uintptr_t luaB_rawset = 0x43C85D0; // (sub)
        inline const uintptr_t luaB_rawlen = 0x43CA040; // (sub)
        inline const uintptr_t luaB_select = 0x43CB490; // (sub)
        inline const uintptr_t luaB_setfenv = 0x43C7E20; // (sub)
        inline const uintptr_t luaB_setmetatable = 0x43C7440; // (sub)
        inline const uintptr_t luaB_tonumber = 0x43C6790; // (sub)
        inline const uintptr_t luaB_tostring = 0x43CD860; // (sub)
        inline const uintptr_t luaB_type = 0x43CA120; // (sub)
        inline const uintptr_t luaB_typeof = 0x43CA610; // (sub)
    } // namespace lua_Base

    namespace lua_Coroutine {
        inline const uintptr_t cocreate = 0x43D0A20; // (sub)
        inline const uintptr_t corunning = 0x43D10D0; // (sub)
        inline const uintptr_t costatus = 0x43CF640; // (sub)
        inline const uintptr_t cowrap = 0x43D0EE0; // (sub)
        inline const uintptr_t coyield = 0x43D1070; // (sub)
        inline const uintptr_t coisyieldable = 0x43D1130; // (sub)
        inline const uintptr_t coclose = 0x43D1160; // (sub)
    } // namespace lua_Coroutine

    namespace lua_Debug {
        inline const uintptr_t db_info = 0x43C17D0; // (sub)
        inline const uintptr_t db_traceback = 0x43C2BA0; // (sub)
    } // namespace lua_Debug

    namespace lua_Open {
        inline const uintptr_t luaopen_coroutine = 0x43D1990; // (sub)
        inline const uintptr_t luaopen_table = 0x43E5340; // (sub)
        inline const uintptr_t luaopen_os = 0x43C6690; // (sub)
        inline const uintptr_t luaopen_string = 0x43DAE00; // (sub)
        inline const uintptr_t luaopen_math = 0x43DD630; // (sub)
        inline const uintptr_t luaopen_debug = 0x43C2D60; // (sub)
        inline const uintptr_t luaopen_utf8 = 0x43C4370; // (sub)
        inline const uintptr_t luaopen_bit32 = 0x43E65A0; // (sub)
        inline const uintptr_t luaopen_buffer = 0x43E8240; // (sub)
        inline const uintptr_t luaopen_vector = 0x43EABC0; // (sub)
    } // namespace lua_Open

    namespace lua_RobloxBase {
        inline const uintptr_t luaB_print = 0x1DC6120; // (sub)
        inline const uintptr_t luaB_tick = 0x1DC76D0; // (sub)
        inline const uintptr_t luaB_time = 0x1DC7700; // (sub)
        inline const uintptr_t luaB_elapsedTime = 0x1DC5480; // (sub)
        inline const uintptr_t luaB_wait = 0x1DC7D10; // (sub)
        inline const uintptr_t luaB_delay = 0x1DC4D60; // (sub)
        inline const uintptr_t luaB_spawn = 0x1DC6B60; // (sub)
        inline const uintptr_t luaB_printidentity = 0x1DC6140; // (sub)
        inline const uintptr_t luaB_loadstring = 0x1DC54C0; // (sub)
        inline const uintptr_t luaB_settings = 0x1DC6720; // (sub)
        inline const uintptr_t luaB_UserSettings = 0x1DC7890; // (sub)
        inline const uintptr_t luaB_PluginManager = 0x1DC5C90; // (sub)
        inline const uintptr_t luaB_warn = 0x1DC7ED0; // (sub)
        inline const uintptr_t luaB_require = 0x1DC6230; // (sub)
        inline const uintptr_t luaB_stats = 0x1DC7280; // (sub)
        inline const uintptr_t luaB_version = 0x1DC7C60; // (sub)
        inline const uintptr_t luaB_collectgarbage = 0x1DC4610; // (sub)
        inline const uintptr_t luaB_getfenv = 0x1DC8680; // (sub)
        inline const uintptr_t luaB_setfenv = 0x1DC8780; // (sub)
    } // namespace lua_RobloxBase

    namespace lua_String {
        inline const uintptr_t str_byte = 0x43D31D0; // (sub)
        inline const uintptr_t str_char = 0x43D3540; // (sub)
        inline const uintptr_t str_find = 0x43D4FE0; // (sub)
        inline const uintptr_t str_format = 0x43D6C20; // (sub)
        inline const uintptr_t str_gmatch = 0x43D5330; // (sub)
        inline const uintptr_t str_gsub = 0x43D6600; // (sub)
        inline const uintptr_t str_len = 0x43D1E50; // (sub)
        inline const uintptr_t str_lower = 0x43D29B0; // (sub)
        inline const uintptr_t str_match = 0x43D4FF0; // (sub)
        inline const uintptr_t str_rep = 0x43D2C50; // (sub)
        inline const uintptr_t str_reverse = 0x43D2860; // (sub)
        inline const uintptr_t str_sub = 0x43D1F10; // (sub)
        inline const uintptr_t str_upper = 0x43D2B00; // (sub)
        inline const uintptr_t str_split = 0x43D7250; // (sub)
        inline const uintptr_t str_pack = 0x43D8450; // (sub)
        inline const uintptr_t str_packsize = 0x43D8D70; // (sub)
        inline const uintptr_t str_unpack = 0x43D90F0; // (sub)
    } // namespace lua_String

} // namespace Offsets
