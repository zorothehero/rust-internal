#ifndef RUST_LocalPlayer
#define RUST_LocalPlayer
class BasePlayer;

class LocalPlayer
{
public:
    static BasePlayer* Entity()
    {
        static auto klazz = *reinterpret_cast<Il2CppClass**>(game_module + offsets::LocalPlayer::LocalPlayer_TypeInfo);
        
        return *reinterpret_cast<BasePlayer**>(reinterpret_cast<std::uint64_t>(klazz->static_fields) + offsets::LocalPlayer::Entityk__BackingField);
    }
    
    static Vector3 eyePos();
};

#endif
