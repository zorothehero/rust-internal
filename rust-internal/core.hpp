#define _CRT_SECURE_NO_WARNINGS
// General
#include <Windows.h>
#include <cstdint>
#include <iostream>
#include <string>
#include <format>
#include <array>

/* Needs to be implemented later */
#ifdef _DEBUG
#define Log(s) std::cout << (s) << "\n";
#define OBFUSCATE_STR(s) s
#else
#define OBFUSCATE_STR(s) s
#define Log(s) s
#endif

std::uint64_t game_module = 0;
std::uint64_t unity_module = 0;

// Utilities
#include "utils/crc32.hpp"
#include "utils/xorstr.hpp"
#include "utils/limp.hpp"
#include "game/vector.hpp"
#include "settings.hpp"
#include "shader.hpp"
// Game

#define DO_API(r, n, p) static r (*n) p = nullptr
#include "game/unity/il2cpp.hpp"
#undef DO_API

#include "game/unity/il2cpp-helper.hpp"
#ifndef _DEBUG
#include "utils/hook.hpp"
#else
#include "utils/detours/detours.h"
namespace hookmanager {
	template<typename Function>
	void hook(Function*& func, void* detour) {
		DetourTransactionBegin();
		DetourUpdateThread(GetCurrentThread());
		DetourAttach(&(PVOID&)func, detour);
		DetourTransactionCommit();
	}

	template<typename Function>
	void unhook(Function*& func, void* detour) {
		DetourTransactionBegin();
		DetourUpdateThread(GetCurrentThread());
		DetourDetach(&(PVOID&)func, detour);
		DetourTransactionCommit();
	}
}
#endif
#ifndef _DEBUG
#include "game/offsets.hpp"
#else
#include "C:\Program Files (x86)\Steam\steamapps\common\Rust\Dumped\offsets.hpp"
#endif
#include "game/sdk.hpp"

