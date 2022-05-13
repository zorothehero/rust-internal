#ifndef RUST_GUI
#define RUST_GUI

class GUI {
public:
	static GUISkin* Skin()
	{
		return reinterpret_cast<GUISkin * (*)()>(game_module + offsets::UnityEngine_GUI::get_skin)();
	}

	static void Color(Color color)
	{
		return reinterpret_cast<void(*)(::Color)>(game_module + offsets::UnityEngine_GUI::set_color_Color)(color);
	}

	static void DrawTexture(Rect pos, Texture2D* texture)
	{
		return reinterpret_cast<void(*)(Rect, Texture2D*)>(game_module + offsets::UnityEngine_GUI::DrawTexture_Rect_Texture)(pos, texture);
	}

	static bool Button(Rect rect, GUIContent* content, GUIStyle* style)
	{
		return reinterpret_cast<bool(*)(Rect, GUIContent*, GUIStyle*)>(game_module + offsets::UnityEngine_GUI::Button_Rect_GUIContent_GUIStyle)(rect, content, style);
	}

	static void Label(Rect rect, GUIContent* content, GUIStyle* style)
	{
		return reinterpret_cast<void(*)(Rect, GUIContent*, GUIStyle*)>(game_module + offsets::UnityEngine_GUI::Label_Rect_GUIContent_GUIStyle)(rect, content, style);
	}

	static Material* blitMaterial()
	{
		return reinterpret_cast<Material*(*)()>(game_module + offsets::UnityEngine_GUI::get_blitMaterial)();
	}

	static Material* blendMaterial()
	{
		return reinterpret_cast<Material*(*)()>(game_module + offsets::UnityEngine_GUI::get_blendMaterial)();
	}

	static void Box(Rect rect, Il2CppString* text)
	{
		return reinterpret_cast<void(*)(Rect, Il2CppString*)>(game_module + offsets::UnityEngine_GUI::Box_Rect_string)(rect, text);
	}

	static void Box(Rect rect, const char* text)
	{
		return reinterpret_cast<void(*)(Rect, Il2CppString*)>(game_module + offsets::UnityEngine_GUI::Box_Rect_string)(rect, il2cpp_string_new(text));
	}
};

#endif