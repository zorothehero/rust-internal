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

#include "game/offsets.hpp"
#include "game/sdk.hpp"

