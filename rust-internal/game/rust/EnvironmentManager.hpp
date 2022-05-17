#ifndef RUST_EnvironmentManager
#define RUST_EnvironmentManager

enum EnvironmentType
{
	Underground = 1,
	Building = 2,
	Outdoor = 4,
	Elevator = 8,
	PlayerConstruction = 16,
	TrainTunnels = 32,
	UnderwaterLab = 64,
	Submarine = 128,
	BuildingDark = 256,
	BuildingVeryDark = 512
};

class EnvironmentManager {
public:
	static EnvironmentType Get(Vector3 pos)
	{
		return reinterpret_cast<EnvironmentType(*)(Vector3)>(game_module + offsets::EnvironmentManager::Get_Vector3)(pos);
	}
};

#endif
