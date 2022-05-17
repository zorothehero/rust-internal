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

    Transform* get_parent()
    {
        return reinterpret_cast<Transform * (*)(Transform*)>(game_module + offsets::UnityEngine_Transform::get_parent)(this);
    }

    Matrix4x4* get_localToWorldMatrix()
    {
        return reinterpret_cast<Matrix4x4 * (*)(Transform*)>(game_module + offsets::UnityEngine_Transform::get_localToWorldMatrix)(this);
    }
};

#endif
