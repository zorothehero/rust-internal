#ifndef RUST_GUISTYLE
#define RUST_GUISTYLE
#include "TextAnchor.hpp"

class GUIStyle {
public:
	void FontSize(int size)
	{
		if (!this) return;
		return reinterpret_cast<void(__fastcall*)(GUIStyle*, int)>(game_module + offsets::UnityEngine_GUIStyle::set_fontSize_int)(this, size);
	}
	void Alignment(TextAnchor alignment)
	{
		if (!this) return;
		return reinterpret_cast<void(__fastcall*)(GUIStyle*, TextAnchor)>(game_module + offsets::UnityEngine_GUIStyle::set_alignment_TextAnchor)(this, alignment);
	}
};

#endif