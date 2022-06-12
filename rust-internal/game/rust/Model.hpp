#ifndef RUST_Model
#define RUST_Model
#include "LocalPlayer.hpp"

class Model : public Component
{
public:
    Array<Transform*>* boneTransforms()
    {
        if (!this) return nullptr;
        return *reinterpret_cast<Array<Transform*>**>(this + offsets::Model::boneTransforms);
    }

    Array<Il2CppString*>* boneNames()
    {
        if (!this) return nullptr;
        return *reinterpret_cast<Array<Il2CppString*>**>(this + offsets::Model::boneNames);
    }

    Bone* resolve(std::uint32_t hash)
    {
        if (!this) return nullptr;
        auto boneTransforms = this->boneTransforms();
        auto boneNames = this->boneNames();

        for(uint32_t i = 0; i < boneNames->size(); i++)
        {
            auto boneTransform = boneTransforms->get(i);
            auto boneName = boneNames->get(i);
            if(!boneTransforms || !boneName) continue;
            
            if (RUNTIME_CRC32_W(boneName->chars) == hash)
                return new Bone(boneTransform->position(), GamePhysics::LineOfSight(boneTransform->position(), LocalPlayer::eyePos()), boneTransform);
        }

        return nullptr;
    }
};

#endif
