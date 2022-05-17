#ifndef RUST_PlayerTick
#define RUST_PlayerTick


class PlayerTick {
public:
	Vector3 position()
	{
		return *reinterpret_cast<Vector3*>(this + offsets::PlayerTick::position);
	}
};

#endif