namespace aim
{
	double get_bullet_drop(double height, double aaaa, float speed, float gravity) {
		double pitch = std::atan2(height, aaaa);
		double vel_double = speed * std::cos(pitch);
		double t = aaaa / vel_double;
		double y = (0.4905f * gravity * t * t);
		return y * 10;
	}


	Vector3 Predict()
	{
		if (!target->bones()) return Vector3::Zero();

		Vector3 targetv = target->bones()->head->position;

		Vector3 target_velocity = target->playerModel()->newVelocity();
		
		BaseProjectile* baseProjectile = LocalPlayer::Entity()->GetHeldEntity<BaseProjectile>();
		
		if (!baseProjectile || baseProjectile->ClassName_Hash() != STATIC_CRC32("BaseProjectile"))
			return targetv;

		static Type* type = Type::GetType(xorstr_("ItemModProjectile, Assembly-CSharp"));
		if (!type)
			return targetv;

		BaseProjectile::Magazine* primaryMag = baseProjectile->primaryMagazine();
		if (!primaryMag)
			return targetv;

		ItemDefinition* ammoType = primaryMag->ammoType();
		if (!ammoType)
			return targetv;

		ItemModProjectile* itemModProjectile = ammoType->GetComponent<ItemModProjectile>(type);
		if (!itemModProjectile)
			return targetv;

		float speed = itemModProjectile->GetRandomVelocity() * 1.45f * baseProjectile->projectileVelocityScale();

		if (speed == 0.0f)
			return targetv;

		Projectile* projectile = itemModProjectile->projectileObject()->Get()->GetComponent<Projectile>(Type::Projectile());

		if (!projectile)
			return targetv;

		float dist = targetv.distance(LocalPlayer::Entity()->eyes()->position());
		float travel_time = dist / speed;
		Vector3 vel = Vector3(target_velocity.x, 0, target_velocity.z);// * 0.75;
		Vector3 predict_vel = vel * travel_time;

		targetv.x += predict_vel.x;
		targetv.z += predict_vel.z;

		double height = targetv.y - LocalPlayer::Entity()->eyes()->position().y;
		Vector3 dir = targetv - LocalPlayer::Entity()->eyes()->position();
		float astronaut = sqrt((dir.x * dir.x) + (dir.z * dir.z));
		float drop = get_bullet_drop(height, astronaut, speed, projectile->gravityModifier());
		targetv.y += drop;

		return targetv;
	}
}