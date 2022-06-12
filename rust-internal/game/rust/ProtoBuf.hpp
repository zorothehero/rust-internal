namespace ProtoBuf {
	class BaseNetworkable {
	public:
		uint32_t uid()
		{
			if (!this) return 0;
			return *reinterpret_cast<uint32_t*>(this + offsets::ProtoBuf_BaseNetworkable::uid);
		}
	};
	class BasePlayer {
	public:
		uint64_t userid()
		{
			if (!this) return 0;
			return *reinterpret_cast<uint32_t*>(this + offsets::ProtoBuf_BasePlayer::userid);
		}
		PlayerFlags playerFlags()
		{
			if (!this) return (PlayerFlags)0;
			return *reinterpret_cast<PlayerFlags*>(this + offsets::ProtoBuf_BasePlayer::playerFlags);
		}

		bool HasPlayerFlag(PlayerFlags flag)
		{
			if (!this) return false;

			return (this->playerFlags() & flag) == flag;
		}
	};

	class Entity {
	public:
		ProtoBuf::BaseNetworkable* baseNetworkable()
		{
			if (!this) return nullptr;
			return *reinterpret_cast<ProtoBuf::BaseNetworkable**>(this + offsets::ProtoBuf_Entity::baseNetworkable);
		}

		ProtoBuf::BasePlayer* basePlayer()
		{
			if (!this) return nullptr;
			return *reinterpret_cast<ProtoBuf::BasePlayer**>(this + offsets::ProtoBuf_Entity::basePlayer);
		}
	};
}