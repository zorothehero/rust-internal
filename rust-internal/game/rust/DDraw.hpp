#ifndef RUST_DDRAW
#define RUST_DDRAW
#include "Component.hpp"

class DDraw : public Component
{
public:
	static inline void(*OnGUI_)(DDraw*) = nullptr;

	void OnGUI()
	{
		return OnGUI_(this);
	}

	static DDraw* Get()
	{
		return reinterpret_cast<DDraw * (__stdcall*)()>(game_module + offsets::UnityEngine_DDraw::Get)();
	}
};


#endif