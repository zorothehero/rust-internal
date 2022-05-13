#ifndef RUST_MAINMENUSYSTEM
#define RUST_MAINMENUSYSTEM
#include "Component.hpp"

class MainMenuSystem : public Component
{
public:
	static inline void(*Update_)(MainMenuSystem*) = nullptr;

	void Update()
	{
		return Update_(this);
	}
};


#endif