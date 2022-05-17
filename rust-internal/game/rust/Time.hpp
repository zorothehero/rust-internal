#ifndef RUST_Time
#define Rust_Time

class Time {
public:
	static float deltaTime()
	{
		return reinterpret_cast<float(*)()>(game_module + offsets::UnityEngine_Time::get_deltaTime)();
	}
};

#endif 