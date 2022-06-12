#ifndef RUST_PlayerModel
#define RUST_PlayerModel

class PlayerModel {
public:
	Vector3 newVelocity()
	{
		if (!this) return Vector3::Zero();
		return *reinterpret_cast<Vector3*>(this + offsets::PlayerModel::newVelocity);
	}
};

#endif