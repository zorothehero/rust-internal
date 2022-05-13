#ifndef RUST_MainCamera
#define RUST_MainCamera

class MainCamera
{
public:
    static Camera* mainCamera()
    {
        static auto klazz = *reinterpret_cast<Il2CppClass**>(game_module + offsets::MainCamera::MainCamera_TypeInfo);
        
        return *reinterpret_cast<Camera**>(reinterpret_cast<std::uint64_t>(klazz->static_fields) + offsets::MainCamera::mainCamera);
    }
};

#endif
