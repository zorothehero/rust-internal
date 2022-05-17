namespace Flyhack
{
	bool isInAir = false;
	float flyhackDistanceVertical = 0.0f;
	float flyhackDistanceHorizontal = 0.0f;
	float flyhackPauseTime = 0.0f;

	float flyhack_forgiveness_vertical_inertia = 10.0f;
	float flyhack_forgiveness_vertical = 1.5f;
	float flyhack_forgiveness_horizontal_inertia = 10.0f;
	float flyhack_forgiveness_horizontal = 1.5f;

	float flyhack_stepsize = 0.1f;
	int flyhack_maxsteps = 15;

	bool TestFlying(BasePlayer* ply, Vector3 oldPos, Vector3 newPos)
	{
		isInAir = false;

		float flyhack_extrusion = 2.0f;
		Vector3 vector = (oldPos + newPos) * 0.5f;
		if (!ply->OnLadder() && !WaterLevel::Test(vector - Vector3(0.0f, flyhack_extrusion, 0.0f), true, ply) && (EnvironmentManager::Get(vector) & EnvironmentType::Elevator) == (EnvironmentType)0)
		{
			float flyhack_margin = 0.05f;
			float radius = ply->GetRadius();
			float height = ply->GetHeight(false);
			Vector3 vector2 = vector + Vector3(0.0f, radius - flyhack_extrusion, 0.0f);
			Vector3 vector3 = vector + Vector3(0.0f, height - radius, 0.0f);
			float radius2 = radius - flyhack_margin;
			isInAir = !Physics::CheckCapsule(vector2, vector3, radius2, 1503731969, QueryTriggerInteraction::Ignore);
		}
		if (isInAir)
		{
			bool flag = false;
			Vector3 vector4 = newPos - oldPos;
			float num2 = Mathf::Abs(vector4.y);
			float num3 = Vector3Ex::Magnitude2D(vector4);
			if (vector4.y >= 0.0f)
			{
				flyhackDistanceVertical += vector4.y;
				flag = true;
			}
			if (num2 < num3)
			{
				flyhackDistanceHorizontal += num3;
				flag = true;
			}
			if (flag)
			{
				float num4 = Mathf::Max((flyhackPauseTime > 0.0f) ? flyhack_forgiveness_horizontal_inertia : flyhack_forgiveness_horizontal, 0.0f);
				float num5 = ply->GetJumpHeight();
				if (flyhackDistanceVertical > num5)
				{
					return true;
				}
				float num6 = Mathf::Max((flyhackPauseTime > 0.0f) ? flyhack_forgiveness_horizontal_inertia : flyhack_forgiveness_horizontal, 0.0f);
				float num7 = 5.0f + num6;
				if (flyhackDistanceHorizontal > num7)
				{
					return true;
				}
			}
		}
		else {
			flyhackDistanceVertical = 0.0f;
			flyhackDistanceHorizontal = 0.0f;
		}
		return false;
	}

	bool IsFlying(bool PreventFlyhack)
	{
		BasePlayer* ply = LocalPlayer::Entity();
		bool result;
		flyhackPauseTime = Mathf::Max(0.0f, flyhackPauseTime - Time::deltaTime());
		bool flag = ply->transform()->get_parent() == nullptr;
		Matrix4x4* matrix4x = flag ? matrix4x->identity() : ply->transform()->get_parent()->get_localToWorldMatrix();
		Vector3 oldPos = flag ? ply->lastSentTick()->position() : matrix4x->MultiplyPoint3x4(ply->lastSentTick()->position());
		Vector3 vector = flag ? ply->transform()->position() : matrix4x->MultiplyPoint3x4(ply->transform()->position());

		result = TestFlying(ply, oldPos, vector);

		if (result && PreventFlyhack)
		{
			ply->ForcePositionTo(oldPos);
		}
		return result;
	}
}