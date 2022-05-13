#ifndef RUST_GUICONTENT
#define RUST_GUICONTENT

class GUIContent {
public:
	static GUIContent* Temp(Il2CppString* content)
	{
		return reinterpret_cast<GUIContent * (*)(Il2CppString*)>(game_module + offsets::UnityEngine_GUIContent::Temp_string)(content);
	}
};

#endif