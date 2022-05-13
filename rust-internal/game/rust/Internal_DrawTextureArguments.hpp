#ifndef RUST_Internal_DrawTextureArguments
#define RUST_Internal_DrawTextureArguments


struct Internal_DrawTextureArguments
{
public:
    Rect screenRect;
    Rect sourceRect;
    int leftBorder;
    int rightBorder;
    int topBorder;
    int bottomBorder;
    Color leftBorderColor;
    Color rightBorderColor;
    Color topBorderColor;
    Color bottomBorderColor;
    Color color;
    Vector4 borderWidths;
    Vector4 cornerRadiuses;
    bool smoothCorners;
    int pass;
    Texture2D* texture;
    Material* mat;
};

#endif