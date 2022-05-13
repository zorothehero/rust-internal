#ifndef RUST_GL
#define RUST_GL

class GL
{
public:
    static void PushMatrix()
    {
        return reinterpret_cast<void(*)()>(game_module + offsets::UnityEngine_GL::PushMatrix)();
    }

    static void PopMatrix()
    {
        return reinterpret_cast<void(*)()>(game_module + offsets::UnityEngine_GL::PopMatrix)();
    }

    static void MultMatrix(Matrix4x4* matrix)
    {
        return reinterpret_cast<void(*)(Matrix4x4*)>(game_module + offsets::UnityEngine_GL::MultMatrix_Matrix4x4)(matrix);
    }
};

#endif
