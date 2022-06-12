#ifndef RUST_BaseCombatEntity
#define RUST_BaseCombatEntity
#include "BaseEntity.hpp"

class BaseCombatEntity : public BaseEntity
{
public:
    enum class LifeState {
        Alive = 0,
        Dead = 1
    };
    
    float health()
    {
        if (!this) return 0.0f;
        return *reinterpret_cast<float*>(this + offsets::BaseCombatEntity::_health);
    }

    float maxHealth()
    {
        if (!this) return 0.0f;
        return *reinterpret_cast<float*>(this + offsets::BaseCombatEntity::_maxHealth);
    }

    LifeState lifeState()
    {
        if (!this) return LifeState::Dead;
        return *reinterpret_cast<LifeState*>(this + offsets::BaseCombatEntity::lifestate);
    }
};

#endif
