﻿#ifndef RUST_Matrix4x4
#define RUST_Matrix4x4

class Matrix4x4
{
public:
    static Matrix4x4* identity()
    {
        return reinterpret_cast<Matrix4x4*(*)()>(game_module + offsets::UnityEngine_Matrix4x4::get_identity)();
    }

    float& m00()
    {
        return *reinterpret_cast<float*>(this + offsets::UnityEngine_Matrix4x4::m00);
    }

    float& m01()
    {
        return *reinterpret_cast<float*>(this + offsets::UnityEngine_Matrix4x4::m01);
    }
    
    float& m03()
    {
        return *reinterpret_cast<float*>(this + offsets::UnityEngine_Matrix4x4::m03);
    }
    
    float& m10()
    {
        return *reinterpret_cast<float*>(this + offsets::UnityEngine_Matrix4x4::m10);
    }
    
    float& m11()
    {
        return *reinterpret_cast<float*>(this + offsets::UnityEngine_Matrix4x4::m11);
    }
    
    float& m13()
    {
        return *reinterpret_cast<float*>(this + offsets::UnityEngine_Matrix4x4::m13);
    }
};

#endif
