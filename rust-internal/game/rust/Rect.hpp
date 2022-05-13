#ifndef RUST_RECT
#define RUST_RECT

class Rect {
public:
	float x;
	float y;
	float w;
	float h;
	Rect(float x, float y, float w, float h) {
		this->x = x;
		this->y = y;
		this->w = w;
		this->h = h;
	}
	Rect() {
		this->x = 0;
		this->y = 0;
		this->w = 0;
		this->h = 0;
	}
	bool Contains(Vector2 point)
	{
		return point.x >= x && point.x < (x + w) && point.y >= y && point.y < (y + h);
	}

	Rect& operator+=(const Vector2& v) {
		this->x += v.x;
		this->y += v.y;
		return *this;
	}

	Rect operator+(const Vector2& input) const {
		return Rect(this->x + input.x, this->y + input.y, this->w, this->h);
	}
};

#endif
