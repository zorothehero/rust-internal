#ifndef RUST_AimConeUtil
#define RUST_AimConeUtil

class AimConeUtil {
public:
	static inline Vector3(*GetModifiedAimConeDirection_)(float, Vector3, bool);
	
	static Vector3 GetModifiedAimConeDirection(float aimCone, Vector3 inputVec, bool anywhereInside = true) {
		return GetModifiedAimConeDirection_(aimCone, inputVec, anywhereInside);
	}

};

#endif