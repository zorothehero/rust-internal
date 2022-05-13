#ifndef RUST_Graphics
#define RUST_Graphics

class Graphics
{
public:
                         // Rect screenRect, Texture2D* texture, Rect sourceRect, int leftBorder, int rightBorder, int topBorder, int bottomBorder, Color color, Material* mat, int pass
    static void DrawTexture(Rect screenRect, Texture2D* texture, Rect sourceRect, int leftBorder, int rightBorder, int topBorder, int bottomBorder, Color color, Material* mat, int pass = -1)
    {
        reinterpret_cast<void*(*)(Rect,Texture2D*,Rect,int,int,int,int,Color,Material*,int)>
            (game_module + offsets::UnityEngine_Graphics::DrawTextureImpl_Rect_Texture_Rect_int_int_int_int_Color_Material_int)
            (screenRect, texture, sourceRect, leftBorder, rightBorder, topBorder, bottomBorder, color, mat, pass);
        //   Rect,       Texture, Rect,       int,        int,         int,       int,          Color, Material int
    }
};

#endif
