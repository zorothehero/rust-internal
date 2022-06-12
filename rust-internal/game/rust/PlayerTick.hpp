#ifndef RUST_PlayerTick
#define RUST_PlayerTick


class PlayerTick {
public:
	Vector3 position()
	{
		if (!this) return Vector3::Zero();
		return *reinterpret_cast<Vector3*>(this + offsets::PlayerTick::position);
	}

	static inline void(*CopyTo_)(PlayerTick*, PlayerTick*) = nullptr;

	void CopyTo(PlayerTick* instance)
	{
		return CopyTo_(this, instance);
	}
};

#endif