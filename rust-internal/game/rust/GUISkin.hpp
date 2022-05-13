#ifndef RUST_GUISKIN
#define RUST_GUISKIN
#include "GUIStyle.hpp"

class GUISkin {
public:
	GUIStyle* m_button()
	{
		if (!this) return nullptr;

		return *reinterpret_cast<GUIStyle**>(this + offsets::UnityEngine_GUISkin::m_button);
	}
	GUIStyle* m_label()
	{
		if (!this) return nullptr;

		return *reinterpret_cast<GUIStyle**>(this + offsets::UnityEngine_GUISkin::m_label);
	}
};


#endif