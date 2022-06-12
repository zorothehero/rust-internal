#ifndef RUST_BaseProjectile
#define RUST_BaseProjectile

class BaseProjectile : public AttackEntity{
public:
	class Magazine {
	public:
		ItemDefinition* ammoType()
		{
			if (!this) return nullptr;
			return *reinterpret_cast<ItemDefinition**>(this + offsets::BaseProjectile_Magazine::ammoType);
		}
	};

	Magazine* primaryMagazine()
	{
		if (!this) return nullptr;
		return *reinterpret_cast<Magazine**>(this + offsets::BaseProjectile::primaryMagazine);
	}

	float projectileVelocityScale()
	{
		if (!this) return 0.0f;
		return *reinterpret_cast<float*>(this + offsets::BaseProjectile::projectileVelocityScale);
	}
};

#endif