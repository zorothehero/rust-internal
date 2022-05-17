#ifndef RUST_Physics
#define RUST_Physics

enum QueryTriggerInteraction
{
	UseGlobal,
	Ignore,
	Collide
};

class Physics {
public:
	static bool CheckCapsule(Vector3 start, Vector3 end, float radius, int layerMask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return reinterpret_cast<bool(*)(Vector3, Vector3, float, int, QueryTriggerInteraction)>(game_module + offsets::UnityEngine_Physics::CheckCapsule_Vector3_Vector3_float_int_QueryTriggerInteraction)(start, end, radius, layerMask, queryTriggerInteraction);
	}
};

#endif