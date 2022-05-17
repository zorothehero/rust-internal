#ifndef RUST_Mathf
#define RUST_Mathf

class Mathf {
public:
	static float Abs(float f)
	{
		return (f >= 0 ? f : -f);
	}
	static float Max(float a, float b)
	{
		return (a > b) ? a : b;
	}
};

#endif 