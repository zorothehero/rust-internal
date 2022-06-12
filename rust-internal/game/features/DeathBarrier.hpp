namespace DeathBarrier
{
	bool TestInsideTerrain(Vector3 pos)
	{
		auto Meta = TerrainMeta::New();
		if (!Meta) return false;
		if (!Meta->HeightMap()) return false;
		if (!Meta->terrain()) return false;
		if (!Meta->Collision()) return false;

		float height = Meta->HeightMap()->GetHeight(pos);

		if (pos.y > height - 0.3f)
			return false;

		float gaysex = Meta->Position().y + Meta->terrain()->SampleHeight(pos);
		return pos.y <= gaysex - 0.3f && !Meta->Collision()->GetIgnore(pos, 0.01f);
	}

	bool IsInsideTerrain(bool prevent = false)
	{
		BasePlayer* player = LocalPlayer::Entity();
		bool result = TestInsideTerrain(player->transform()->position());
		if(prevent && result)
			player->ForcePositionTo(player->lastSentTick()->position());
		return result;
	}
}