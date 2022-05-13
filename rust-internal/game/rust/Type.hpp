#ifndef RUST_TYPE
#define RUST_TYPE
class Type
{
public:
	static Type* GetType(const char* qualified_name) {
		return reinterpret_cast<Type * (__cdecl*)(Il2CppString*)>(game_module + offsets::System_Type::GetType_string)(il2cpp_string_new(qualified_name));
	}
};

#endif