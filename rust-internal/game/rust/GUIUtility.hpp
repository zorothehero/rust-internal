#ifndef RUST_GUIUtility
#define RUST_GUIUtility

class GUIUtility
{
public:
    static void RotateAroundPivot(float angle, Vector2 pivotPoint)
    {
        return reinterpret_cast<void(*)(float, Vector2)>(game_module + offsets::UnityEngine_GUIUtility::RotateAroundPivot_float_Vector2)(angle, pivotPoint);
    }
};

#endif
