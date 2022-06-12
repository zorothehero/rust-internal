#ifndef RUST_TerrainHeightMap
#define RUST_TerrainHeightMap

class TerrainHeightMap {
public:
	Vector3 GetNormal(Vector3 worldPos)
	{
		if (!this || worldPos == Vector3::Zero()) return Vector3::Zero();
		return reinterpret_cast<Vector3(*)(TerrainHeightMap*, Vector3)>(game_module + offsets::TerrainHeightMap::GetNormal_Vector3)(this, worldPos);
	}
	float GetHeight(Vector3 idk)
	{
		if (!this || idk == Vector3::Zero()) return 0.0f;
		return reinterpret_cast<float(*)(TerrainHeightMap*, Vector3)>(game_module + offsets::TerrainHeightMap::GetHeight_Vector3)(this, idk);
	}
};

#endif 
