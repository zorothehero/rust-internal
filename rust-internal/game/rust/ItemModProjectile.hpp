#ifndef RUST_ItemModProjectile
#define RUST_ItemModProjectile

class ItemModProjectile {
public:
	static inline float (*GetRandomVelocity_)(ItemModProjectile*) = nullptr;

	float GetRandomVelocity()
	{
		return GetRandomVelocity_(this);
	}

	ResourceRef<GameObject>* projectileObject()
	{
		if (!this) return nullptr;
		return *reinterpret_cast<ResourceRef<GameObject>**>(this + offsets::ItemModProjectile::projectileObject);
	}
};

#endif