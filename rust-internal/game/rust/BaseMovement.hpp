#ifndef RUST_BaseMovement
#define RUST_BaseMovement

class BaseMovement {
public:
	void TeleportTo(Vector3 pos, BasePlayer* player)
	{
		return reinterpret_cast<void(*)(BaseMovement*, Vector3, BasePlayer*)>(game_module + offsets::BaseMovement::TeleportTo_Vector3_BasePlayer)(this, pos, player);
	}
};

#endif
