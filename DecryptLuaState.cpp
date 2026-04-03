// By BinaryCrypt (Aka Qwar1e)
// Time taken: 0.116456s

#include <Windows.h>
#include <stdint.h>

struct lua_State;

namespace Offsets {
	namespace ScriptContext {
		inline const uintptr_t EncryptedState = 0x440;
	}
}

lua_State* DecryptLuaState(uintptr_t ScriptContext) {
    uint32_t* EncryptedState = reinterpret_cast<uint32_t*>(ScriptContext + Offsets::ScriptContext::EncryptedState);

    uintptr_t BaseAddress = reinterpret_cast<uintptr_t>(EncryptedState);

    uint32_t Low = EncryptedState[0] - static_cast<uint32_t>(BaseAddress);
    uint32_t High = EncryptedState[1] - static_cast<uint32_t>(BaseAddress);

    return reinterpret_cast<lua_State*>(
        (static_cast<uint64_t>(High) << 32) | Low
    );
}