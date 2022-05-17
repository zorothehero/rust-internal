#ifndef RUST_BaseNetworkable
#define RUST_BaseNetworkable

class BaseNetworkable : public Component
{
public:
	struct LoadInfo
	{
		ProtoBuf::Entity* msg;
		bool fromDisk;
	};
};

#endif
