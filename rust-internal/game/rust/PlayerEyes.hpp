#ifndef RUST_PlayerEyes
#define RUST_PlayerEyes

class PlayerEyes
{
public:
    Vector3 position()
    {
        if (!this) return Vector3::Zero();
        return reinterpret_cast<Vector3(*)(PlayerEyes*)>(game_module + offsets::PlayerEyes::get_position)(this);
    }

    Vector3 BodyForward( ) {
        if (!this) return Vector3::Zero();
        return reinterpret_cast<Vector3(__fastcall*)(PlayerEyes*)>(game_module + offsets::PlayerEyes::BodyForward)(this);
    }

    Quaternion rotation()
    {
        if (!this) return Quaternion();
        return reinterpret_cast<Quaternion(__fastcall*)(PlayerEyes*)>(game_module + offsets::PlayerEyes::get_rotation)(this);
    }
};

#endif
