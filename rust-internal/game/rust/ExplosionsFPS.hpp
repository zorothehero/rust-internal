#ifndef RUST_ExplosionsFPS
#define RUST_ExplosionsFPS

class ExplosionsFPS
{
public:
    static inline void(*OnGUI_)(ExplosionsFPS*) = nullptr;

    void OnGUI()
    {
        return OnGUI_(this);
    }
};

#endif
