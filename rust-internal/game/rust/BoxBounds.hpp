#ifndef RUST_BoxBounds
#define RUST_BoxBounds

struct box_bounds {
    float left, right, top, bottom;

    bool empty( ) {
        if (this->left == 0 && this->right == 0 && this->top == 0 && this->bottom == 0)
            return true;

        if (this->left == FLT_MAX || this->right == FLT_MIN || this->top == FLT_MAX || this->bottom == FLT_MIN)
            return true;

        return false;
    }
    static box_bounds null( ) {
        return { 0, 0, 0, 0 };
    }
};
#endif
