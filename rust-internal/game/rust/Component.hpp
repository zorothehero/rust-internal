#ifndef RUST_COMPONENT
#define RUST_COMPONENT
#include "GameObject.hpp"

class Transform;

class Component {
public:
	GameObject* gameObject()
	{
		return reinterpret_cast<GameObject*(*)(Component*)>(game_module + offsets::UnityEngine_Component::get_gameObject)(this);
	}

	Transform* transform()
	{
		return reinterpret_cast<Transform*(*)(Component*)>(game_module + offsets::UnityEngine_Component::get_transform)(this);
	}
};

#endif