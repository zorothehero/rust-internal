#ifndef RUST_Graphics
#define RUST_Graphics
#include "Internal_DrawTextureArguments.hpp"

class Graphics
{
public:
    static void DrawTexture(Rect screenRect, Texture2D* texture, Rect sourceRect, int leftBorder, int rightBorder, int topBorder, int bottomBorder, Color color, Material* mat, int pass = -1)
    {
        // Internal_DrawTextureArguments internal_DrawTextureArguments{};
        // internal_DrawTextureArguments.screenRect = screenRect;
        // internal_DrawTextureArguments.sourceRect = sourceRect;
        // internal_DrawTextureArguments.leftBorder = leftBorder;
        // internal_DrawTextureArguments.rightBorder = rightBorder;
        // internal_DrawTextureArguments.topBorder = topBorder;
        // internal_DrawTextureArguments.bottomBorder = bottomBorder;
        // internal_DrawTextureArguments.color = color;
        // internal_DrawTextureArguments.pass = pass;
        // internal_DrawTextureArguments.texture = texture;
        // internal_DrawTextureArguments.mat = mat;
        // reinterpret_cast<void*(*)(Internal_DrawTextureArguments)>(game_module + offsets::UnityEngine_Graphics::Internal_DrawTexture_Internal_DrawTextureArguments)(internal_DrawTextureArguments);
        
        reinterpret_cast<void*(*)(Rect,Texture2D*,Rect,int,int,int,int,Color,Material*,int)>
            (game_module + offsets::UnityEngine_Graphics::DrawTextureImpl_Rect_Texture_Rect_int_int_int_int_Color_Material_int)
            (screenRect, texture, sourceRect, leftBorder, rightBorder, topBorder, bottomBorder, color, mat, pass);
    }
};

#endif
