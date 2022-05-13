#ifndef RUST_ListDictionary
#define RUST_ListDictionary

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
