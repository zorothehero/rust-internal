#ifndef RUST_GAMEOBJECT
#define RUST_GAMEOBJECT
#include "Component.hpp"
#include "Type.hpp"


class GameObject {
public:
	Component* AddComponent(Type* type)
	{
		if (!this) return nullptr;
		return reinterpret_cast<Component * (*)(GameObject*, Type*)>(game_module + offsets::UnityEngine_GameObject::AddComponent_Type)(this, type);
	}

	template<typename T = GameObject>
	T* GetComponent(Type* type) {
		if (!this || !type) return nullptr;
		return reinterpret_cast<T * (*)(GameObject*, Type*)>(game_module + offsets::UnityEngine_GameObject::GetComponent_Type)(this, type);
	}
};
#endif