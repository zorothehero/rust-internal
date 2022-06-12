#ifndef RUST_Item
#define RUST_Item

class Item {
public:
	std::uint32_t uid()
	{
		if (!this) return 0U;
		return *reinterpret_cast<std::uint32_t*>(this + offsets::Item::uid);
	}

	template<typename T = void*>
	T* heldEntity()
	{
		if (!this) return nullptr;
		return *reinterpret_cast<T**>(this + offsets::Item::heldEntity);
	}
};

#endif