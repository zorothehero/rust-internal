#ifndef RUST_Vector3Ex
#define RUST_Vector3Ex

class Vector3Ex {
public:
	static float Magnitude2D(Vector3 v)
	{
		return reinterpret_cast<float(*)(Vector3)>(game_module + offsets::UnityEngine_Vector3Ex::Magnitude2D_Vector3)(v);
	}
};

#endif 