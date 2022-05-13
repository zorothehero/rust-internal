#ifndef RUST_EVENT
#define RUST_EVENT
#include "EventType.hpp"

class Event {
public:

	static Event* Current()
	{
		return reinterpret_cast<Event * (*)()>(game_module + offsets::UnityEngine_Event::get_current)();
	}

	Vector2 Delta()
	{
		auto m_ptr = *reinterpret_cast<std::uint64_t*>(this + offsets::UnityEngine_Event::m_Ptr);
		if(!m_ptr) return Vector2::Zero();
		
		return *reinterpret_cast<Vector2*>(m_ptr + 0x10);
	}

	Vector2 mousePosition()
	{
		auto m_ptr = *reinterpret_cast<std::uint64_t*>(this + offsets::UnityEngine_Event::m_Ptr);
		if(!m_ptr) return Vector2::Zero();
		
		return *reinterpret_cast<Vector2*>(m_ptr + 0x8);
	}

	EventType Type()
	{
		if (!this) return EventType::MouseDown;

		return reinterpret_cast<EventType(*)(Event*)>(game_module + offsets::UnityEngine_Event::get_type)(this);
	}
};
#endif