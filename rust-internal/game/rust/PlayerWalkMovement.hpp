#ifndef RUST_PlayerWalkMovement
#define RUST_PlayerWalkMovement

class PlayerWalkMovement {
public:
    static inline void(*HandleJumping_)(PlayerWalkMovement*, ModelState*, bool, bool) = nullptr;
    static inline void(*HandleRunDuckCrawl_)(PlayerWalkMovement*, ModelState*, bool, bool, bool) = nullptr;

    void HandleRunDuckCrawl(ModelState* state, bool wantsRun, bool wantsDuck, bool wantsCrawl)
    {
        return HandleRunDuckCrawl_(this, state, wantsRun, wantsDuck, wantsCrawl);
    }

    void HandleJumping(ModelState* state, bool wantsJump, bool jumpInDirection = false)
    {
        return HandleJumping_(this, state, wantsJump, jumpInDirection);
    }

    void Jump(ModelState* state, bool inDirection)
    {
        if (!this) return;
        return reinterpret_cast<void(*)(PlayerWalkMovement*, ModelState*, bool)>(game_module + offsets::PlayerWalkMovement::Jump_ModelState_bool)(this, state, inDirection);
    }
};

#endif