#ifndef RUST_COLOR
#define RUST_COLOR

struct Color {
public:
	float r, g, b, a;

	Color()
	{
		this->r = 0;
		this->g = 0;
		this->b = 0;
		this->a = 0;
	}

	Color(float r, float g, float b, float a) {
		this->r = r;
		this->g = g;
		this->b = b;
		this->a = a;
	}
	static Color red() { return { 1, 0, 0, 1 }; }
	static Color green() { return { 0, 1, 0, 1 }; }
	static Color blue() { return { 0, 0, 1, 1 }; }
	static Color yellow() { return { 1, 1, 0, 1 }; }
	static Color white() { return { 1, 1, 1, 1 }; }
};

#endif