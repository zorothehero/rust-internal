#ifndef RUST_GUILayout
#define RUST_GUILayout

class GUILayout
{
public:
    static void BeginArea(Rect screenRect)
    {
        reinterpret_cast<void(*)(Rect)>(game_module + offsets::UnityEngine_GUILayout::BeginArea_Rect)(screenRect);
    }

    static void EndArea()
    {
        reinterpret_cast<void(*)()>(game_module + offsets::UnityEngine_GUILayout::EndArea)();
    }

    static GUILayoutOption* ExpandWidth(bool expand)
    {
        return reinterpret_cast<GUILayoutOption*(*)(bool)>(game_module + offsets::UnityEngine_GUILayout::ExpandWidth_bool)(expand);
    }

    static GUILayoutOption* Width(float value)
    {
        return reinterpret_cast<GUILayoutOption*(*)(bool)>(game_module + offsets::UnityEngine_GUILayout::Width_float)(value);
    }

    static void BeginHorizontal()
    {
        Il2CppArray* options = il2cpp_array_new_specific((Il2CppClass*)il2cpp::getClass("GUILayoutOption", "UnityEngine"), 0u);
        reinterpret_cast<void(*)(Il2CppArray*)>(game_module + offsets::UnityEngine_GUILayout::BeginHorizontal_GUILayoutOptionarray)(options);
    }

    static void EndHorizontal()
    {
        reinterpret_cast<void(*)()>(game_module + offsets::UnityEngine_GUILayout::EndHorizontal)();
    }

    static bool Button(const char* text)
    {
        Il2CppArray* options = il2cpp_array_new_specific((Il2CppClass*)il2cpp::getClass("GUILayoutOption", "UnityEngine"), 1u);
        *reinterpret_cast<GUILayoutOption**>(std::uint64_t(options) + 0x20) = ExpandWidth(false);

        return reinterpret_cast<bool(*)(Il2CppString*, Il2CppArray*)>(game_module + offsets::UnityEngine_GUILayout::Button_string_GUILayoutOptionarray)(il2cpp_string_new(text), options);
    }

    static float HorizontalSlider(float value, float leftValue, float rightValue)
    {
        Il2CppArray* options = il2cpp_array_new_specific((Il2CppClass*)il2cpp::getClass("GUILayoutOption", "UnityEngine"), 0u);
        //*reinterpret_cast<GUILayoutOption**>(std::uint64_t(options) + 0x20) = ExpandWidth(true);

        return reinterpret_cast<float(*)(float, float, float, Il2CppArray*)>(game_module + offsets::UnityEngine_GUILayout::HorizontalSlider_float_float_float_GUILayoutOptionarray)(value, leftValue, rightValue, options);
    }

    static void Label(Il2CppString* text)
    {
        Il2CppArray* options = il2cpp_array_new_specific((Il2CppClass*)il2cpp::getClass("GUILayoutOption", "UnityEngine"), 1u);
        *reinterpret_cast<GUILayoutOption**>(std::uint64_t(options) + 0x20) = Width(80.0f);
        reinterpret_cast<void(*)(Il2CppString*, Il2CppArray*)>(game_module + offsets::UnityEngine_GUILayout::Label_string_GUILayoutOptionarray)(text, options);

    }

    static void Label(const char* text)
    {
        Il2CppArray* options = il2cpp_array_new_specific((Il2CppClass*)il2cpp::getClass("GUILayoutOption", "UnityEngine"), 1u);
        *reinterpret_cast<GUILayoutOption**>(std::uint64_t(options) + 0x20) = Width(100.0f);
        
        reinterpret_cast<void(*)(Il2CppString*, Il2CppArray*)>(game_module + offsets::UnityEngine_GUILayout::Label_string_GUILayoutOptionarray)(il2cpp_string_new(text), options);
    }

    static bool Toggle(bool value, const char* text)
    {
        Il2CppArray* options = il2cpp_array_new_specific((Il2CppClass*)il2cpp::getClass("GUILayoutOption", "UnityEngine"), 1u);
        *reinterpret_cast<GUILayoutOption**>(std::uint64_t(options) + 0x20) = ExpandWidth(false);
        
        return reinterpret_cast<bool(*)(bool, Il2CppString*, Il2CppArray*)>(game_module + offsets::UnityEngine_GUILayout::Toggle_bool_string_GUILayoutOptionarray)(value, il2cpp_string_new(text), options);
    }
};

#endif
