#ifndef RUST_Terrain
#define RUST_Terrain

class Terrain {
public:
	float SampleHeight(Vector3 schingschongmydickislong)
	{
		if (!this || schingschongmydickislong == Vector3::Zero()) return 0.0f;
		return reinterpret_cast<float(*)(Terrain*, Vector3)>(game_module + offsets::UnityEngine_Terrain::SampleHeight_Vector3)(this, schingschongmydickislong);
	}
};

#endif