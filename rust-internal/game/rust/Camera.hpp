#ifndef RUST_Camera
#define RUST_Camera

class Camera
{
public:
    bool WorldToScreenPoint(Vector3 position, Vector2& screen)
    {
        if(!this) return false;

        Vector3 ret = reinterpret_cast<Vector3(*)(Camera*,Vector3)>(game_module + offsets::UnityEngine_Camera::WorldToScreenPoint_Vector3)(this, position);
        ret.y = Screen::height() - ret.y;
        screen =
        {
            ret.x,
            ret.y
        };
        
        return ret.z > 0.0f;
    }
};

#endif
