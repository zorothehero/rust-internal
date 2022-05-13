#ifndef RUST_GamePhysics
#define RUST_GamePhysics

class GamePhysics
{
public:
    static bool LineOfSight(Vector3 a, Vector3 b, int mask, float padding = 0.0f)
    {
        return reinterpret_cast<bool(*)(Vector3, Vector3, int, float, BaseEntity*)>(game_module + offsets::GamePhysics::LineOfSight_Vector3_Vector3_int_float_BaseEntity)(a,b,mask,padding, nullptr);
    }
    
    static bool LineOfSight(Vector3 a, Vector3 b)
    {
        return LineOfSight(a, b, 1503731969, 0.0f) && LineOfSight(b, a, 1503731969, 0.0f);
    }
};

#endif
