#ifndef RUST_BaseEntity
#define RUST_BaseEntity
#include "BaseNetworkable.hpp"

class BaseEntity : public BaseNetworkable
{
public:
    Model* model()
    {
        return *reinterpret_cast<Model**>(this + offsets::BaseEntity::model);
    }
};

#endif
