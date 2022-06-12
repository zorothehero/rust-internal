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

	Vector2 CalcSize(GUIContent* content)
	{
		if (!this) return Vector2::Zero();
		Vector2 ret = Vector2::Zero();
		reinterpret_cast<void(__fastcall*)(GUIStyle*, GUIContent*, Vector2*)>(game_module + offsets::UnityEngine_GUIStyle::Internal_CalcSize_Injected_GUIContent_Vector2)(this, content, &ret);
		return ret;
	}
	
	void Alignment(TextAnchor alignment)
	{
		if (!this) return;
		return reinterpret_cast<void(__fastcall*)(GUIStyle*, TextAnchor)>(game_module + offsets::UnityEngine_GUIStyle::set_alignment_TextAnchor)(this, alignment);
	}
};

#endif