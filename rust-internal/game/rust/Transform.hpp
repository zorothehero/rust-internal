#ifndef RUST_Transform
#define RUST_Transform

class Transform
{
public:
    Vector3 position()
    {
        if(!this) return Vector3::Zero();

        return reinterpret_cast<Vector3(*)(Transform*)>(game_module + offsets::UnityEngine_Transform::get_position)(this);
    }
};

#endif
