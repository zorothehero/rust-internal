#ifndef RUST_PlayerInventory
#define RUST_PlayerInventory

class PlayerInventory {
public:
	ItemContainer* containerBelt()
	{
		if (!this) return nullptr;
		return *reinterpret_cast<ItemContainer**>(this + offsets::PlayerInventory::containerBelt);
	}
};

#endif