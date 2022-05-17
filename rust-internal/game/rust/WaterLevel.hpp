#ifndef RUST_WaterLevel
#define RUST_WaterLevel

class WaterLevel {
public:
	static bool Test(Vector3 pos, bool waves, BaseEntity* forEntity)
	{
		return reinterpret_cast<bool(*)(Vector3, bool, BaseEntity*)>(game_module + offsets::WaterLevel::Test_Vector3_bool_BaseEntity)(pos, waves, forEntity);
	}
};

#endif
