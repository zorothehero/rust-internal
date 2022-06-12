#ifndef RUST_BaseNetworkable
#define RUST_BaseNetworkable

class BaseNetworkable : public Component
{
public:
	std::uint32_t ShortPrefabName_Hash()
	{
		if (!this) return 0U;
		return RUNTIME_CRC32_W(reinterpret_cast<Il2CppString * (*)(BaseNetworkable*)>(game_module + offsets::BaseNetworkable::get_ShortPrefabName)(this)->chars);
	}
	struct LoadInfo
	{
		ProtoBuf::Entity* msg;
		bool fromDisk;
	};
};

#endif
