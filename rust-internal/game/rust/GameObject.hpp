#ifndef RUST_GAMEOBJECT
#define RUST_GAMEOBJECT
#include "Component.hpp"
#include "Type.hpp"


class GameObject {
public:
	Component* AddComponent(Type* type)
	{
		return reinterpret_cast<Component * (*)(GameObject*, Type*)>(game_module + offsets::UnityEngine_GameObject::AddComponent_Type)(this, type);
	}
};
#endif