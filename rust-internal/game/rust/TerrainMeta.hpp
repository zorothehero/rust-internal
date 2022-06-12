#ifndef RUST_TerrainMeta
#define RUST_TerrainMeta

class TerrainMeta {
public:
	static TerrainMeta* New()
	{
		static auto klazz = *reinterpret_cast<Il2CppClass**>(game_module + offsets::TerrainMeta::TerrainMeta_TypeInfo);

		return *reinterpret_cast<TerrainMeta**>(reinterpret_cast<std::uint64_t>(klazz->static_fields) + offsets::TerrainMeta::Terraink__BackingField);
	}

	Vector3 Position()
	{
		if (!this) return Vector3::Zero();
		return reinterpret_cast<Vector3(*)(TerrainMeta*)>(game_module + offsets::TerrainMeta::get_Position)(this);
	}

	TerrainHeightMap* HeightMap()
	{
		if (!this) return nullptr;
		return reinterpret_cast<TerrainHeightMap * (*)(TerrainMeta*)>(game_module + offsets::TerrainMeta::get_HeightMap)(this);
	}

	Terrain* terrain()
	{
		if (!this) return nullptr;
		return reinterpret_cast<Terrain * (*)(TerrainMeta*)>(game_module + offsets::TerrainMeta::get_Terrain)(this);
	}

	TerrainCollision* Collision()
	{
		if (!this) return nullptr;
		return reinterpret_cast<TerrainCollision * (*)(TerrainMeta*)>(game_module + offsets::TerrainMeta::get_Collision)(this);
	}
};

#endif