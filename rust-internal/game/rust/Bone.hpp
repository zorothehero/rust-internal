#ifndef RUST_Bone
#define RUST_Bone

class Bone {
public:
    Vector3 position;
    bool visible;
    Transform* transform;

    Bone( ) {
        this->position = Vector3::Zero( );
        this->visible = false;
    }
    Bone(Vector3 position, bool visible) {
        this->position = position;
        this->visible = visible;
        this->transform = nullptr;
    }
    Bone(Vector3 position, bool visible, Transform* traa) {
        this->position = position;
        this->visible = visible;
        this->transform = traa;
    }
    bool visible_(Vector3 from) {
        if (this->position.empty( ))
            return false;

        if (!this->transform)
            return false;

        return GamePhysics::LineOfSight(this->position, from);
    }
};

#endif
