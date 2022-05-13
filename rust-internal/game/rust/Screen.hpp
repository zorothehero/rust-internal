#ifndef RUST_SCREEN
#define RUST_SCREEN

class Screen
{
public:
	static float width()
	{
		return reinterpret_cast<int(*)()>(game_module + offsets::UnityEngine_Screen::get_width)();
	}

	static float height()
	{
		return reinterpret_cast<int(*)()>(game_module + offsets::UnityEngine_Screen::get_height)();
	}

	static Vector2 size()
	{
		return Vector2(width(), height());
	}
};

#endif