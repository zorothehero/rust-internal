#ifndef RUST_COMPONENT
#define RUST_COMPONENT
#include "GameObject.hpp"

class Transform;

class Component {
public:
	GameObject* gameObject()
	{
		if (!this) return nullptr;
		return reinterpret_cast<GameObject*(*)(Component*)>(game_module + offsets::UnityEngine_Component::get_gameObject)(this);
	}

	Transform* transform()
	{
		if (!this) return nullptr;
		return reinterpret_cast<Transform*(*)(Component*)>(game_module + offsets::UnityEngine_Component::get_transform)(this);
	}

	std::uint32_t ClassName_Hash()
	{
		if (!this) return 0U;
		auto oc = *reinterpret_cast<uint64_t*>(this);
		if (!oc) return 0U;
		const char* name = *reinterpret_cast<char**>(oc + 0x10);
		return RUNTIME_CRC32(name);
	}

	template<typename T = Component>
	T* GetComponent(Type* type) {
		if (!this || !type) return nullptr;
		return reinterpret_cast<T * (*)(Component*, Type*)>(game_module + offsets::UnityEngine_Component::GetComponent_Type)(this, type);
	}
};

#endif