#ifndef RUST_BasePlayer
#define RUST_BasePlayer
#include "BaseCombatEntity.hpp"

std::array<int, 20> valid_bones = {
    1, 2, 3, 5, 6, 14, 15, 17, 18, 21, 23, 24, 25, 26, 27, 48, 55, 56, 57, 76
};

class BasePlayer : public BaseCombatEntity
{
public:
    std::uint64_t userID()
    {
        return *reinterpret_cast<std::uint64_t*>(this + offsets::BasePlayer::userID);
    }

    box_bounds get_bounds(BasePlayer* player, float expand = 0) {
        box_bounds ret = { FLT_MAX, FLT_MIN, FLT_MAX, FLT_MIN };

        for (auto j : valid_bones) {
            auto arr = player->model( )->boneTransforms( );
            if (arr) {
                auto transform = player->model( )->boneTransforms( )->get(j);
                if (transform) {
                    Vector2 sc;
                    auto world_pos = transform->position( );

                    if (j == 48)
                        world_pos.y += 0.2f;

                    if (MainCamera::mainCamera()->WorldToScreenPoint(world_pos, sc)) {
                        Vector2 bone_screen = sc;

                        if (bone_screen.x < ret.left)
                            ret.left = bone_screen.x;
                        if (bone_screen.x > ret.right)
                            ret.right = bone_screen.x;
                        if (bone_screen.y < ret.top)
                            ret.top = bone_screen.y;
                        if (bone_screen.y > ret.bottom)
                            ret.bottom = bone_screen.y;
                    }
                }
            }
        }

        if (ret.left == FLT_MAX)
            return box_bounds::null( );
        if (ret.right == FLT_MIN)
            return box_bounds::null( );
        if (ret.top == FLT_MAX)
            return box_bounds::null( );
        if (ret.bottom == FLT_MIN)
            return box_bounds::null( );

        ret.left -= expand;
        ret.right += expand;
        ret.top -= expand;
        ret.bottom += expand;

        return ret;
    };
    
    BoneCache* bones()
    {
        auto cache = new BoneCache();
        auto model = this->model();
        
        cache->head = model->resolve(STATIC_CRC32("head"));
        cache->neck = model->resolve(STATIC_CRC32("neck"));
        cache->spine4 = model->resolve(STATIC_CRC32("spine4"));
        cache->spine1 = model->resolve(STATIC_CRC32("spine1"));
        cache->l_upperarm = model->resolve(STATIC_CRC32("l_upperarm"));
        cache->l_forearm = model->resolve(STATIC_CRC32("l_forearm"));
        cache->l_hand = model->resolve(STATIC_CRC32("l_hand"));
        cache->r_upperarm = model->resolve(STATIC_CRC32("r_upperarm"));
        cache->r_forearm = model->resolve(STATIC_CRC32("r_forearm"));
        cache->r_hand = model->resolve(STATIC_CRC32("r_hand"));
        cache->pelvis = model->resolve(STATIC_CRC32("pelvis"));
        cache->l_hip = model->resolve(STATIC_CRC32("l_hip"));
        cache->l_knee = model->resolve(STATIC_CRC32("l_knee"));
        cache->l_foot = model->resolve(STATIC_CRC32("l_foot"));
        cache->r_hip = model->resolve(STATIC_CRC32("r_hip"));
        cache->r_knee = model->resolve(STATIC_CRC32("r_knee"));
        cache->r_foot = model->resolve(STATIC_CRC32("r_foot"));
        cache->r_toe = model->resolve(STATIC_CRC32("r_toe"));
        cache->l_toe = model->resolve(STATIC_CRC32("l_toe"));
        if (this->userID( ) != LocalPlayer::Entity( )->userID( )) {
            box_bounds bo = get_bounds(this, 2.f);
            if (!bo.empty( ))
                cache->bounds = bo;

            Vector2 footPos;
            if (MainCamera::mainCamera()->WorldToScreenPoint(cache->head->position, footPos))
                cache->dfc = footPos;

            Vector2 forwardd;
            if (MainCamera::mainCamera()->WorldToScreenPoint(cache->head->position + (this->eyes( )->BodyForward( ) * 2), forwardd)) {
                cache->forward = forwardd;
            }
				
            cache->eye_rot = this->eyes( )->rotation( );
        }
        
        return cache;
    }
    
    static ListDictionary* visiblePlayerList()
    {
        static auto klazz = *reinterpret_cast<Il2CppClass**>(game_module + offsets::BasePlayer::BasePlayer_TypeInfo);

        return *reinterpret_cast<ListDictionary**>(reinterpret_cast<std::uint64_t>(klazz->static_fields) + offsets::BasePlayer::visiblePlayerList);
    }

    PlayerTick* lastSentTick()
    {
        return *reinterpret_cast<PlayerTick**>(this + offsets::BasePlayer::lastSentTick);
    }

    float GetRadius()
    {
        return reinterpret_cast<float(*)(BasePlayer*)>(game_module + offsets::BasePlayer::GetRadius)(this);
    }

    float GetHeight(bool ducked)
    {
        return reinterpret_cast<float(*)(BasePlayer*, bool)>(game_module + offsets::BasePlayer::GetHeight_bool)(this, ducked);
    }

    bool OnLadder()
    {
        return reinterpret_cast<bool(*)(BasePlayer*)>(game_module + offsets::BasePlayer::OnLadder)(this);
    }

    float GetJumpHeight()
    {
        return reinterpret_cast<float(*)(BasePlayer*)>(game_module + offsets::BasePlayer::GetJumpHeight)(this);
    }

    PlayerEyes* eyes()
    {
        return *reinterpret_cast<PlayerEyes**>(this + offsets::BasePlayer::eyes);
    }

    Il2CppString* _displayName()
    {
        return *reinterpret_cast<Il2CppString**>(this + offsets::BasePlayer::_displayName);
    }

    Vector3 midPoint()
    {
        return this->bones()->r_foot->position.midPoint(this->bones( )->l_foot->position) - Vector3(0.0f, 0.1f, 0.0f);
    }

    BaseMovement* movement()
    {
        return *reinterpret_cast<BaseMovement**>(this + offsets::BasePlayer::movement);
    }
    
    void ForcePositionTo(Vector3 pos)
    {
        return reinterpret_cast<void(*)(BasePlayer*, Vector3)>(game_module + offsets::BasePlayer::ForcePositionTo_Vector3)(this, pos);
    }

    static inline void(*SendClientTick_)(BasePlayer*) = nullptr;

    void SendClientTick()
    {
        return SendClientTick_(this);
    }

    PlayerFlags& playerFlags()
    {
        return *reinterpret_cast<PlayerFlags*>(this + offsets::BasePlayer::playerFlags);
    }

    bool HasPlayerFlag(PlayerFlags flag) {
        if (!this) return false;

        return (playerFlags() & flag) == flag;
    }
};

#endif
