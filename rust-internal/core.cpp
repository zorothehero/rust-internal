#include "core.hpp"

ExplosionsFPS* instance = 0;

HMODULE hModule = 0;

void DrawGUI(Event* Event)
{
	static Rect area = Rect((Screen::width() / 2) - 350, (Screen::height() / 2) - 250, 350, 250);
	
	if (Event->Type() == EventType::MouseDrag && Rect(area.x, area.y, area.w, 30).Contains(Event->mousePosition()))
		area += Event->Delta();
	
	GUI::Box(area, OBFUSCATE_STR("rust-internal"));
	GUILayout::BeginArea(Rect(area.x + 10, area.y + 40, area.w - 15, area.h));

	// Controls
	
	GUILayout::BeginHorizontal();
	if(GUILayout::Button(OBFUSCATE_STR("Visuals"))) settings::currentTab = Tab::Visuals;
	if(GUILayout::Button(OBFUSCATE_STR("Combat"))) settings::currentTab = Tab::Combat;
	if(GUILayout::Button(OBFUSCATE_STR("Misc"))) settings::currentTab = Tab::Misc;
	GUILayout::EndHorizontal();
	
	switch(settings::currentTab)
	{
	case Tab::Visuals:
		GUILayout::Toggle(settings::player::esp, OBFUSCATE_STR("Player"));
		if(settings::player::esp)
		{
			GUILayout::Toggle(settings::player::health, OBFUSCATE_STR("Health"));
			GUILayout::Toggle(settings::player::distance, OBFUSCATE_STR("Distance"));
			GUILayout::Toggle(settings::player::skeleton, OBFUSCATE_STR("Skeleton"));
		}
		break;
	case Tab::Combat:
		
		break;
	case Tab::Misc:
		GUILayout::Toggle(settings::misc::flyhackbar, OBFUSCATE_STR("Flyhack Indicator"));
		if(settings::misc::flyhackbar)
			GUILayout::Toggle(settings::misc::antiflyhack, OBFUSCATE_STR("Anti Flyhack Kick"));
		GUILayout::Toggle(settings::misc::AdminMode, OBFUSCATE_STR("Admin Mode"));
		GUILayout::Toggle(settings::misc::inf_jump, OBFUSCATE_STR("Infinite Jump"));
		break;
	}
	
	
	// End of controls
	
	GUILayout::EndArea();
}

void OnGUIHook(ExplosionsFPS* self)
{
	const auto Event = Event::Current();

	if(Event->Type() == EventType::KeyDown && Input::GetKeyDown(KeyCode::Insert))
		settings::showMenu = !settings::showMenu;

	if(Event->Type() != EventType::KeyDown && settings::showMenu)
		DrawGUI(Event);

	if (Event->Type() == EventType::Repaint)
	{
		if (auto localPlayer = LocalPlayer::Entity())
		{
			if(settings::misc::AdminMode)
				localPlayer->playerFlags() |= PlayerFlags::IsAdmin;
		}
		Renderer::Init();
		Renderer::String( Vector2(15.0f, 15.0f), OBFUSCATE_STR("rust-internal"), Color(1, 1, 0, 1), false, 14);
		//Renderer::Line({0,0}, {10, 10}, Color::white(), 1.5f);
		if(!settings::player::esp) return;
		
		if(const auto visiblePlayerList = BasePlayer::visiblePlayerList())
		{
			for(int i = 0; i < visiblePlayerList->vals->size; i++)
			{
				const auto player = visiblePlayerList->vals->get<BasePlayer*>(i);
				if(!player || player == LocalPlayer::Entity()) continue;

				Vector2 screenPos = Vector2::Zero();
				
				if(!MainCamera::mainCamera()->WorldToScreenPoint(player->midPoint(), screenPos)) continue;

				float y = 0.0f;
				
				Renderer::String(Vector2(screenPos.x, screenPos.y + y), player->_displayName(), Color(1, 1, 1, 1), true);
				if(settings::player::health)
				{
					y += 15.0f;
					Renderer::String(Vector2(screenPos.x, screenPos.y + y), il2cpp_string_new(std::format(OBFUSCATE_STR("{:.2f} HP"), player->health()).c_str()), Color(1, 1, 1, 1), true);
				}
				if(settings::player::distance)
				{
					y += 15.0f;
					Renderer::String(Vector2(screenPos.x, screenPos.y + y), il2cpp_string_new(std::format(OBFUSCATE_STR("{:.2f}m"), LocalPlayer::Entity()->midPoint().distance(player->midPoint())).c_str()), Color(1, 1, 1, 1), true);
				}

				if(settings::player::skeleton)
				{
					auto info = player->bones( );

					auto head_b = info->head;
					auto spine4_b = info->spine4;
					auto l_upperarm_b = info->l_upperarm;
					auto l_forearm_b = info->l_forearm;
					auto l_hand_b = info->l_hand;
					auto r_upperarm_b = info->r_upperarm;
					auto r_forearm_b = info->r_forearm;
					auto r_hand_b = info->r_hand;
					auto pelvis_b = info->pelvis;
					auto l_hip_b = info->l_hip;
					auto l_knee_b = info->l_knee;
					auto l_foot_b = info->l_foot;
					auto r_hip_b = info->r_hip;
					auto r_knee_b = info->r_knee;
					auto r_foot_b = info->r_foot;
					auto r_toe_b = info->r_toe;
					auto l_toe_b = info->l_toe;
					Vector2 head, spine,
						l_upperarm, l_forearm, l_hand,
						r_upperarm, r_forearm, r_hand,
						pelvis, l_hip, l_knee,
						l_foot, r_hip, r_knee,
						r_foot, l_toe, r_toe;
					if (MainCamera::mainCamera()->WorldToScreenPoint(head_b->position, head) &&
						MainCamera::mainCamera()->WorldToScreenPoint(spine4_b->position, spine) &&
						MainCamera::mainCamera()->WorldToScreenPoint(l_upperarm_b->position, l_upperarm) &&
						MainCamera::mainCamera()->WorldToScreenPoint(l_forearm_b->position, l_forearm) &&
						MainCamera::mainCamera()->WorldToScreenPoint(l_hand_b->position, l_hand) &&
						MainCamera::mainCamera()->WorldToScreenPoint(r_upperarm_b->position, r_upperarm) &&
						MainCamera::mainCamera()->WorldToScreenPoint(r_forearm_b->position, r_forearm) &&
						MainCamera::mainCamera()->WorldToScreenPoint(r_hand_b->position, r_hand) &&
						MainCamera::mainCamera()->WorldToScreenPoint(pelvis_b->position, pelvis) &&
						MainCamera::mainCamera()->WorldToScreenPoint(l_hip_b->position, l_hip) &&
						MainCamera::mainCamera()->WorldToScreenPoint(l_knee_b->position, l_knee) &&
						MainCamera::mainCamera()->WorldToScreenPoint(l_foot_b->position, l_foot) &&
						MainCamera::mainCamera()->WorldToScreenPoint(r_hip_b->position, r_hip) &&
						MainCamera::mainCamera()->WorldToScreenPoint(r_knee_b->position, r_knee) &&
						MainCamera::mainCamera()->WorldToScreenPoint(r_toe_b->position, r_toe) &&
						MainCamera::mainCamera()->WorldToScreenPoint(l_toe_b->position, l_toe) &&
						MainCamera::mainCamera()->WorldToScreenPoint(r_foot_b->position, r_foot))
					{
						Color viscol = Color::green();
						Color inviscol = Color::red();

						Renderer::Line(head, spine, (head_b->visible || spine4_b->visible) ? viscol : inviscol, 1.5f);
						Renderer::Line(spine, l_upperarm, (spine4_b->visible || l_upperarm_b->visible) ? viscol : inviscol, 1.5f);
						Renderer::Line(l_upperarm, l_forearm, (l_upperarm_b->visible || l_forearm_b->visible) ? viscol : inviscol, 1.5f);
						Renderer::Line(l_forearm, l_hand, (l_forearm_b->visible || l_hand_b->visible) ? viscol : inviscol, 1.5f);
						Renderer::Line(spine, r_upperarm, (spine4_b->visible || r_upperarm_b->visible) ? viscol : inviscol, 1.5f);
						Renderer::Line(r_upperarm, r_forearm, (r_upperarm_b->visible || r_forearm_b->visible) ? viscol : inviscol, 1.5f);
						Renderer::Line(r_forearm, r_hand, (r_forearm_b->visible || r_hand_b->visible) ? viscol : inviscol, 1.5f);
						Renderer::Line(spine, pelvis, (spine4_b->visible || pelvis_b->visible) ? viscol : inviscol, 1.5f);
						Renderer::Line(pelvis, l_hip, (pelvis_b->visible || l_hip_b->visible) ? viscol : inviscol, 1.5f);
						Renderer::Line(l_hip, l_knee, (l_hip_b->visible || l_knee_b->visible) ? viscol : inviscol, 1.5f);
						Renderer::Line(l_knee, l_foot, (l_knee_b->visible || l_foot_b->visible) ? viscol : inviscol, 1.5f);
						Renderer::Line(pelvis, r_hip, (pelvis_b->visible || r_hip_b->visible) ? viscol : inviscol, 1.5f);
						Renderer::Line(r_hip, r_knee, (r_hip_b->visible || r_knee_b->visible) ? viscol : inviscol, 1.5f);
						Renderer::Line(r_knee, r_foot, (r_knee_b->visible || r_foot_b->visible) ? viscol : inviscol, 1.5f);
						Renderer::Line(r_foot, r_toe, (r_foot_b->visible || r_toe_b->visible) ? viscol : inviscol, 1.5f);
						Renderer::Line(l_foot, l_toe, (l_foot_b->visible || l_toe_b->visible) ? viscol : inviscol, 1.5f);
					}
				}
			}
		}
	}
}


void UpdateHook(MainMenuSystem* self)
{
	if (instance == 0)
		instance = reinterpret_cast<ExplosionsFPS*>(self->gameObject()->AddComponent(Type::GetType(OBFUSCATE_STR("ExplosionsFPS, Assembly-CSharp"))));

	return self->Update();
}

void SendClientTick(BasePlayer* self)
{

	Flyhack::IsFlying(settings::misc::antiflyhack);

	return self->SendClientTick();
}

void set_flying(ModelState* self, bool state)
{
	if (settings::misc::AdminMode)
		return self->set_flying(false);

	return self->set_flying(state);
}

bool CanJumpHook(PlayerWalkMovement* self)
{
	if (settings::misc::inf_jump)
		return true;
	return self->CanJump();
}

void entry()
{
	game_module = reinterpret_cast<std::uintptr_t>(LI_MODULE("GameAssembly.dll").cached());
	unity_module = reinterpret_cast<std::uintptr_t>(LI_MODULE("UnityPlayer.dll").cached());
	
	#define DO_API(r, n, p) n = (r (*) p)(std::uintptr_t(LI_FN(GetProcAddress)(reinterpret_cast<HMODULE>(game_module), #n)))
	#include "game/unity/il2cpp.hpp"
	#undef DO_API
	
	hookmanager::hook(il2cpp::getMethod(il2cpp::getClass(OBFUSCATE_STR("PlayerWalkMovement")), OBFUSCATE_STR("CanJump"), 3), &CanJumpHook, &PlayerWalkMovement::CanJump_);
	hookmanager::hook(il2cpp::getMethod(il2cpp::getClass(OBFUSCATE_STR("ModelState")), OBFUSCATE_STR("set_flying"), 1), &set_flying, &ModelState::set_flying_);
	hookmanager::hook(il2cpp::getMethod(il2cpp::getClass(OBFUSCATE_STR("BasePlayer")), OBFUSCATE_STR("SendClientTick"), 0), &SendClientTick, &BasePlayer::SendClientTick_);
	hookmanager::hook(il2cpp::getMethod(il2cpp::getClass(OBFUSCATE_STR("MainMenuSystem")), OBFUSCATE_STR("Update"), 0), &UpdateHook, &MainMenuSystem::Update_);
	hookmanager::hook(il2cpp::getMethod(il2cpp::getClass(OBFUSCATE_STR("ExplosionsFPS")), OBFUSCATE_STR("OnGUI"), 0), &OnGUIHook, &ExplosionsFPS::OnGUI_);
}

bool __stdcall DllMain(HMODULE hMod, const std::uint32_t call_reason, LPVOID)
{
	switch(call_reason)
	{
	case DLL_PROCESS_ATTACH:
		hModule = hMod;
		entry();
		break;
	default:
		break;
	}
	
	return true;
}