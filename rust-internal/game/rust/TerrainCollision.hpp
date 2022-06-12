#ifndef RUST_TerrainCollision
#define RUST_TerrainCollision

class TerrainCollision {
public:
	bool GetIgnore(Vector3 yourmomsahoe, float flot)
	{
		if (!this ||yourmomsahoe == Vector3::Zero() || !flot) return false;
		return reinterpret_cast<bool(*)(TerrainCollision*, Vector3, float)>(game_module + offsets::TerrainCollision::GetIgnore_Vector3_float)(this, yourmomsahoe, flot);
	}
};

#endif
