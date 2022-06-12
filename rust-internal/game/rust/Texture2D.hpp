#ifndef RUST_Texture2D
#define RUST_Texture2D

class Texture2D
{
public:
	enum class TextureFormat
	{
		Alpha8 = 1,
		ARGB4444,
		RGB24,
		RGBA32,
		ARGB32,
		RGB565 = 7,
		R16 = 9,
		DXT1,
		DXT5 = 12,
		RGBA4444,
		BGRA32,
		RHalf,
		RGHalf,
		RGBAHalf,
		RFloat,
		RGFloat,
		RGBAFloat,
		YUY2,
		RGB9e5Float,
		BC4 = 26,
		BC5,
		BC6H = 24,
		BC7,
		DXT1Crunched = 28,
		DXT5Crunched,
		PVRTC_RGB2,
		PVRTC_RGBA2,
		PVRTC_RGB4,
		PVRTC_RGBA4,
		ETC_RGB4,
		EAC_R = 41,
		EAC_R_SIGNED,
		EAC_RG,
		EAC_RG_SIGNED,
		ETC2_RGB,
		ETC2_RGBA1,
		ETC2_RGBA8,
		ASTC_4x4,
		ASTC_5x5,
		ASTC_6x6,
		ASTC_8x8,
		ASTC_10x10,
		ASTC_12x12,
		ETC_RGB4_3DS = 60,
		ETC_RGBA8_3DS,
		RG16,
		R8,
		ETC_RGB4Crunched,
		ETC2_RGBA8Crunched,
		ASTC_HDR_4x4,
		ASTC_HDR_5x5,
		ASTC_HDR_6x6,
		ASTC_HDR_8x8,
		ASTC_HDR_10x10,
		ASTC_HDR_12x12,
		ASTC_RGB_4x4 = 48,
		ASTC_RGB_5x5,
		ASTC_RGB_6x6,
		ASTC_RGB_8x8,
		ASTC_RGB_10x10,
		ASTC_RGB_12x12,
		ASTC_RGBA_4x4,
		ASTC_RGBA_5x5,
		ASTC_RGBA_6x6,
		ASTC_RGBA_8x8,
		ASTC_RGBA_10x10,
		ASTC_RGBA_12x12
	};
	
    static Texture2D* New(int width, int height, TextureFormat textureFormat, bool mipChain)
    {
        Texture2D* texture2D = reinterpret_cast<Texture2D*>(il2cpp_object_new(reinterpret_cast<const Il2CppClass*>(*reinterpret_cast<std::uint64_t*>(game_module + offsets::UnityEngine_Texture2D::UnityEngine_Texture2D_TypeInfo))));
        reinterpret_cast<void(*)(Texture2D*, int, int, TextureFormat, bool)>(game_module + offsets::UnityEngine_Texture2D::_ctor_int_int_TextureFormat_bool)(texture2D, width, height, textureFormat, mipChain);
        return texture2D;
    }

	void SetPixel(int x, int y, Color color)
    {
		if (!this) return;
	    reinterpret_cast<void(*)(Texture2D*, int, int, Color)>(game_module + offsets::UnityEngine_Texture2D::SetPixel_int_int_Color)(this, x, y, color);
    }

	void Apply()
    {
		if (!this) return;
	    reinterpret_cast<void(*)(Texture2D*)>(game_module + offsets::UnityEngine_Texture2D::Apply)(this);
    }
};

#endif
