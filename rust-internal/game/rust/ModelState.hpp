#ifndef Rust_ModelState
#define Rust_ModelState

class ModelState {
public:
	static inline void(*set_flying_)(ModelState*, bool) = nullptr;
	void set_flying(bool state) {
		set_flying_(this, state);
	}
};

#endif 
