#ifndef RUST_ListDictionary
#define RUST_ListDictionary

template<typename T = void*>
struct List {
public:
	char pad_0000[0x10];
	void* buffer;
	uint32_t size;

	T* get(uint32_t idx) {
		if (!this) return nullptr;

		if (idx > this->size) return nullptr;

		void* items = this->buffer;

		if (!items) return nullptr;

		return *reinterpret_cast<T**>((uint64_t)items + (0x20 + (idx * 0x8)));
	}
};

class BufferList
{
public:
    char pad_0000[ 0x10 ];
    std::int32_t size;
    char pad_0014[ 0x4 ];
    void* buffer;

    template<typename T = void*>
    T get(int idx)
    {
        if (!this) return nullptr;
        return *reinterpret_cast<T*>(reinterpret_cast<std::uint64_t>(this->buffer) + (0x20 + sizeof(void*) * idx));
    }
};

class ListDictionary
{
public:
    char pad_0000[ 0x20 ];
    BufferList* keys;
    BufferList* vals;
};


#endif
