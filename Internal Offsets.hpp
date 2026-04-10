// by BinaryCrypt (Aka Qwar1e)
// Time taken: 2.109338s
// Offsets Count: 17

namespace Offsets {
	inline const std::string RobloxVersion = "version-26c90be22e0d4758";

    namespace Roblox {
        inline constexpr uintptr_t KTable = 0x7323910;
        inline constexpr uintptr_t Print = 0x1D59300;
        inline constexpr uintptr_t ScriptContextResume = 0x1CC9730;
        inline constexpr uintptr_t GetLuaState = 0x1B9CBB0;
    }

    namespace lua {
        inline constexpr uintptr_t lua_newstate = 0x41B6CC0;
    }

    namespace luaD {
        inline constexpr uintptr_t luaD_rawunprotected = 0x41B2A90;
        inline constexpr uintptr_t luaD_throw = 0x41B2AC0;
    }

    namespace luaF {
        inline constexpr uintptr_t luaF_freeproto = 0x421D080;
    }

    namespace luaL {
        inline constexpr uintptr_t luaL_register = 0x41BB370;
        inline constexpr uintptr_t luaL_findtable = 0x41BC270;
    }

    namespace luaM {
        inline constexpr uintptr_t luaM_visitgco = 0x420D9F0;
        inline constexpr uintptr_t luaM_free_ = 0x420D850;
        inline constexpr uintptr_t luaM_freegco_ = 0x420D8D0;
    }

    namespace Misc {
        inline constexpr uintptr_t close_state = 0x41B6620;
        inline constexpr uintptr_t deletegco = 0x41C1EB0;
        inline constexpr uintptr_t freeobj = 0x41C1A80;
        inline constexpr uintptr_t currfuncname = 0x41B7CB0;
    }
}