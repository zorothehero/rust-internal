#ifndef RUST_ResourceRef
#define RUST_ResourceRef

template<typename T = Object>
class ResourceRef {
public:
	T* Get() {
		if (!this) return nullptr;
		Il2CppString* guid = *reinterpret_cast<Il2CppString**>(this + 0x10);
		T* _cachedObject = (T*)GameManifest::GUIDToObject(guid);

		return _cachedObject;
	}
};

#endif