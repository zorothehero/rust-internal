#ifndef RUST_Projectile
#define RUST_Projectile

class Projectile {
public:
	float gravityModifier()
	{
		if (!this) return 0.0f;
		return *reinterpret_cast<float*>(this + offsets::Projectile::gravityModifier);
	}
};

#endif