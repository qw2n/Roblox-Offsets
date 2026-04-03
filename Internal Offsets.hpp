// by BinaryCrypt (Aka Qwar1e)
// Time taken: 1.206504s
// Offsets Count: 17

namespace Offsets {
	inline const std::string RobloxVersion = "version-689e359b09ad43b0";

    namespace Roblox {
        inline constexpr uintptr_t KTable = 0x7C50600;
        inline constexpr uintptr_t Print = 0x1D1FF80;
        inline constexpr uintptr_t ScriptContextResume = 0x1C90410;
        inline constexpr uintptr_t GetLuaState = 0x1B64F50;
    }

    namespace lua {
        inline constexpr uintptr_t lua_newstate = 0x41AFB50;
    }

    namespace luaD {
        inline constexpr uintptr_t luaD_rawunprotected = 0x41AB930;
        inline constexpr uintptr_t luaD_throw = 0x41AB960;
    }

    namespace luaF {
        inline constexpr uintptr_t luaF_freeproto = 0x4212ED0;
    }

    namespace luaL {
        inline constexpr uintptr_t luaL_register = 0x41B4030;
        inline constexpr uintptr_t luaL_findtable = 0x41B4F00;
    }

    namespace luaM {
        inline constexpr uintptr_t luaM_visitgco = 0x42038D0;
        inline constexpr uintptr_t luaM_free_ = 0x4203730;
        inline constexpr uintptr_t luaM_freegco_ = 0x42037B0;
    }

    namespace Misc {
        inline constexpr uintptr_t close_state = 0x41AF4B0;
        inline constexpr uintptr_t deletegco = 0x41BAEA0;
        inline constexpr uintptr_t freeobj = 0x41BAA70;
        inline constexpr uintptr_t currfuncname = 0x41B09E0;
    }
}