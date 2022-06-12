#ifndef RUST_GameManifest
#define RUST_GameManifest

class GameManifest {
public:
	static Object* GUIDToObject(Il2CppString* guid) {
		return reinterpret_cast<Object * (*)(Il2CppString*)>(game_module + offsets::GameManifest::GUIDToObject_string)(guid);
	}
};

#endif