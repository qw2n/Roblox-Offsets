#pragma once

#include <cstdint>

namespace LuaOffsets
{
    namespace TString
    {
    }

    namespace LuaTable
    {
    }

    namespace Proto
    {
    }

    namespace Closure
    {
    }

    namespace global_State
    {
        inline const uintptr_t grayagain = 0x18; // 24
        inline const uintptr_t mainthread = 0x70; // 112
        inline const uintptr_t pseudotemp = 0x4B0; // 1200
        inline const uintptr_t registry = 0x4C0; // 1216
    }

    namespace stringtable
    {
    }

    namespace lua_Callbacks
    {
    }

    namespace CallInfo
    {
        inline const uintptr_t func = 0x8; // 8
    }

    namespace RobloxExtraSpace
    {
    }

    namespace lua_State
    {
        inline const uintptr_t base_ci = 0x18; // 24
        inline const uintptr_t global = 0x28; // 40
        inline const uintptr_t base = 0x30; // 48
        inline const uintptr_t top = 0x38; // 56
        inline const uintptr_t ci = 0x48; // 72
        inline const uintptr_t gt = 0x60; // 96
        inline const uintptr_t userdata = 0x68; // 104
    }

    namespace lua_Page
    {
    }

}
