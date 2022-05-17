#ifndef RUST_PlayerWalkMovement
#define RUST_PlayerWalkMovement

class PlayerWalkMovement {
public:
    static inline bool(*CanJump_)(PlayerWalkMovement*) = nullptr;

    bool CanJump()
    {
        return CanJump_(this);
    }
};

#endif