#ifndef RUST_AssetBundle
#define RUST_AssetBundle

class AssetBundle
{
public:
    template<typename T = Component>
    T* LoadAsset(char* name, Type* type) {
        return reinterpret_cast<T * (*)(AssetBundle*, Il2CppString*, Type*)>(game_module + offsets::UnityEngine_AssetBundle::LoadAsset_string_Type)(this, il2cpp_string_new(name), type);
    }
    
    static AssetBundle* LoadFromMemory(std::uint8_t* data)
    {
        Il2CppArray* arr = il2cpp_array_new((Il2CppClass*)il2cpp::getClass(OBFUSCATE_STR("Byte"), OBFUSCATE_STR("System")), sizeof(data));
        for(size_t i = 0; i < sizeof(data); i++)
        {
            *reinterpret_cast<std::uint8_t*>(std::uint64_t(arr) + 0x20 + i * sizeof(void*)) = data[i];
        }
        
        return reinterpret_cast<AssetBundle*(*)(Il2CppArray*, std::uint32_t)>(il2cpp_resolve_icall(OBFUSCATE_STR("UnityEngine.AssetBundle::LoadFromMemory_Internal")))(arr, 0);
    }
    
    static AssetBundle* LoadFromFile(const char* path)
    {
        return reinterpret_cast<AssetBundle*(*)(Il2CppString*)>(game_module + offsets::UnityEngine_AssetBundle::LoadFromFile_string)(il2cpp_string_new(path));
    }
};

#endif
