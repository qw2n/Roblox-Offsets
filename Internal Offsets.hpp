// by BinaryCrypt (Aka Qwar1e)
// Time taken: 1.754236s
// Offsets Count: 17

namespace Offsets {
	inline const std::string RobloxVersion = "version-695a88dd8425491f";

    namespace Roblox {
        inline constexpr uintptr_t KTable = 0x73257D0;
        inline constexpr uintptr_t Print = 0x0; // not found.
        inline constexpr uintptr_t ScriptContextResume = 0x1CC9CF0;
        inline constexpr uintptr_t GetLuaState = 0x1B9D170;
    }

    namespace lua {
        inline constexpr uintptr_t lua_newstate = 0x41B72B0;
    }

    namespace luaD {
        inline constexpr uintptr_t luaD_rawunprotected = 0x41B3080;
        inline constexpr uintptr_t luaD_throw = 0x41B30B0;
    }

    namespace luaF {
        inline constexpr uintptr_t luaF_freeproto = 0x421D670;
    }

    namespace luaL {
        inline constexpr uintptr_t luaL_register = 0x41BB960;
        inline constexpr uintptr_t luaL_findtable = 0x41BC860;
    }

    namespace luaM {
        inline constexpr uintptr_t luaM_visitgco = 0x420DFE0;
        inline constexpr uintptr_t luaM_free_ = 0x420DE40;
        inline constexpr uintptr_t luaM_freegco_ = 0x420DEC0;
    }

    namespace Misc {
        inline constexpr uintptr_t close_state = 0x41B6C10;
        inline constexpr uintptr_t deletegco = 0x41C24A0;
        inline constexpr uintptr_t freeobj = 0x41C2070;
        inline constexpr uintptr_t currfuncname = 0x41B82A0;
    }
}