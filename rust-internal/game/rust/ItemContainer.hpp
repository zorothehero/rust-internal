#ifndef RUST_ItemContainer
#define RUST_ItemContainer

class ItemContainer {
public:
	List<Item*>* itemList()
	{
		if (!this) return nullptr;
		return *reinterpret_cast<List<Item*>**>(this + offsets::ItemContainer::itemList);
	}
};

#endif