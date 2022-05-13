#ifndef RUST_Input
#define RUST_Input

class Input
{
public:
    static bool GetKeyDown(KeyCode key)
    {
        return reinterpret_cast<bool(*)(KeyCode)>(game_module + offsets::UnityEngine_Input::GetKeyDown_KeyCode)(key);
    }

    static bool GetKey(KeyCode key)
    {
        return reinterpret_cast<bool(*)(KeyCode)>(game_module + offsets::UnityEngine_Input::GetKey_KeyCode)(key);
    }

    static Vector3 mousePosition()
    {
        return reinterpret_cast<Vector3(*)()>(game_module + offsets::UnityEngine_Input::get_mousePosition)();
    }
};

#endif
