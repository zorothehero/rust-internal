#ifndef RUST_TYPE
#define RUST_TYPE
class Type
{
public:
	static Type* GetType(const char* qualified_name) {
		return reinterpret_cast<Type * (__cdecl*)(Il2CppString*)>(game_module + offsets::System_Type::GetType_string)(il2cpp_string_new(qualified_name));
	}

	static Type* SkinnedMeshRenderer() {
		Type* type = GetType(OBFUSCATE_STR("UnityEngine.SkinnedMeshRenderer, UnityEngine.CoreModule"));
		return type;
	}
	static Type* Renderer() {
		Type* type = GetType(OBFUSCATE_STR("UnityEngine.Renderer, UnityEngine.CoreModule"));
		return type;
	}
	static Type* Shader() {
		Type* type = GetType(OBFUSCATE_STR("UnityEngine.Shader, UnityEngine.CoreModule"));
		return type;
	}
	static Type* Projectile() {
		Type* type = GetType(OBFUSCATE_STR("Projectile, Assembly-CSharp"));
		return type;
	}
};

#endif