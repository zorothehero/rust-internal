#ifndef RUST_SDK
#define RUST_SDK

class Component;
class GameObject;
class Type;
class Event;
class GUIContent;
class GUIStyle;
class GUISkin;
class GUI;
class MainMenuSystem;
class BaseNetworkable;
class BaseEntity;
class BaseCombatEntity;
class BasePlayer;
class ListDictionary;
class BufferList;
class MainCamera;
class Camera;
class Transform;
class LocalPlayer;
class Model;
class BoxBounds;
class BoneCache;
class Bone;
class GamePhysics;
class PlayerEyes;
class Texture2D;
class Matrix4x4;
class GL;
class GUIUtility;
class GUILayout;
class GUILayoutOption;
class AssetBundle;
class Material;
class Graphics;
class ExplosionsFPS;


#include "rust/TextAnchor.hpp"
#include "rust/EventType.hpp"
#include "rust/Color.hpp"
#include "rust/Rect.hpp"
#include "rust/KeyCode.hpp"
#include "rust/PlayerFlags.hpp"
#include "rust/GamePhysics.hpp"
#include "rust/BoxBounds.hpp"
#include "rust/Bone.hpp"
#include "rust/BoneCache.hpp"
#include "rust/PlayerEyes.hpp"
#include "rust/Texture2D.hpp"
#include "rust/Matrix4x4.hpp"
#include "rust/GL.hpp"
#include "rust/GUIUtility.hpp"
#include "rust/Material.hpp"
#include "rust/Graphics.hpp"
#include "rust/ExplosionsFPS.hpp"
#include "rust/Internal_DrawTextureArguments.hpp"

#include "rust/Transform.hpp"
#include "rust/Component.hpp"
#include "rust/Type.hpp"
#include "rust/GameObject.hpp"
#include "rust/Input.hpp"
#include "rust/Event.hpp"
#include "rust/GUIContent.hpp"
#include "rust/GUIStyle.hpp"
#include "rust/GUISkin.hpp"
#include "rust/GUI.hpp"
#include "rust/Screen.hpp"
#include "rust/Camera.hpp"
#include "rust/ListDictionary.hpp"
#include "rust/MainMenuSystem.hpp"
#include "rust/MainCamera.hpp"
#include "rust/BaseNetworkable.hpp"
#include "rust/Model.hpp"
#include "rust/BaseEntity.hpp"
#include "rust/BaseCombatEntity.hpp"
#include "rust/BasePlayer.hpp"
#include "rust/LocalPlayer.hpp"
#include "rust/GUILayout.hpp"
#include "rust/GUILayoutOption.hpp"
#include "rust/AssetBundle.hpp"

Vector3 LocalPlayer::eyePos()
{
	return Entity()->eyes()->position();
}

namespace Renderer
{
	GUIStyle* guiStyle;
	GUISkin* Skin;
	Texture2D* lineTex;
	Texture2D* aaLineTex;
	Material* blitMaterial;
	Material* blendMaterial;
	
	void Init()
	{
		if (Skin && guiStyle && lineTex && aaLineTex && blitMaterial && blendMaterial) return;

		blitMaterial = GUI::blitMaterial();
		blendMaterial = GUI::blendMaterial();
		
		lineTex = Texture2D::New(1, 1, Texture2D::TextureFormat::ARGB32, false);
		lineTex->SetPixel(0, 1, Color::white());
		lineTex->Apply();
		
		aaLineTex = Texture2D::New(1, 3, Texture2D::TextureFormat::ARGB32, false);
		aaLineTex->SetPixel(0, 0, Color(1,1,1,0));
		aaLineTex->SetPixel(0, 1, Color::white());
		aaLineTex->SetPixel(0, 2, Color(1,1,1,0));
		aaLineTex->Apply();
		
		if (!Skin)
			Skin = GUI::Skin();

		if (!guiStyle)
		{
			guiStyle = Skin->m_label();
			guiStyle->FontSize(12);
			guiStyle->Alignment(TextAnchor::UpperLeft);
			GUI::Color(Color(1, 1, 1, 1));
		}
	}

	void SetAlignment(TextAnchor alignment)
	{
		guiStyle->Alignment(alignment);
	}

	void Line(Vector2 pointA, Vector2 pointB, Color color, float thickness, bool antiAlias = false)
	{
		float dx = pointB.x - pointA.x;
		float dy = pointB.y - pointA.y;
		float len = std::sqrt(dx * dx + dy * dy);

		if (len < 0.001f)
		{
			return;
		}
		
		Texture2D* texture2D = antiAlias ? aaLineTex : lineTex;
		Material* mat = antiAlias ? blendMaterial : blitMaterial;
		if(antiAlias)
			thickness *= 3.0f;
         
		float wdx = thickness * dy / len;
		float wdy = thickness * dx / len;
         
		Matrix4x4* matrix = Matrix4x4::identity();
		matrix->m00() = dx;
		matrix->m01() = -wdx;
		matrix->m03() = pointA.x + 0.5f * wdx;
		matrix->m10() = dy;
		matrix->m11() = wdy;
		matrix->m13() = pointA.y - 0.5f * wdy;
		
		GL::PushMatrix();
		GL::MultMatrix(matrix);
		Graphics::DrawTexture(Rect(0, 0, 1, 1), texture2D, Rect(0, 0, 1, 1), 0, 0, 0, 0, color, mat);
		GL::PopMatrix();
	}

	void Box(Rect position, Il2CppString* text)
	{
		GUI::Box(position, text);
	}

	void Label(Rect position, const char* text, Color color = Color(1, 1, 1, 1), bool centered = false, int size = 12)
	{
		guiStyle->FontSize(size);
		GUI::Color(color);
		GUIContent* content = GUIContent::Temp(il2cpp_string_new(text));
		guiStyle->Alignment(TextAnchor::UpperLeft);
		if(centered)
			position.x -= guiStyle->CalcSize(content).x / 2.0f;
		
		GUI::Label(position, content, guiStyle);
	}
	
	void Label(Rect position, Il2CppString* text, Color color = Color(1, 1, 1, 1), bool centered = false, int size = 12)
	{
		guiStyle->FontSize(size);
		GUI::Color(color);
		GUIContent* content = GUIContent::Temp(text);
		guiStyle->Alignment(TextAnchor::UpperLeft);
		if(centered)
			position.x -= guiStyle->CalcSize(content).x / 2.0f;
		
		GUI::Label(position, content, guiStyle);
	}

	void String(Vector2 position, Il2CppString* text, Color color = Color(1, 1, 1, 1), bool centered = false, int size = 12)
	{
		Label(Rect(position.x, position.y, 300.0f, 25.0f), text, color, centered, size);
	}

	void String(Vector2 position, const char* text, Color color = Color(1, 1, 1, 1), bool centered = false, int size = 12)
	{
		Label(Rect(position.x, position.y, 300.0f, 25.0f), text, color, centered, size);
	}

	void Button(Rect position, const char* content, Color color)
	{
		GUI::Color(color);
		GUI::Button(position, GUIContent::Temp(il2cpp_string_new(content)), guiStyle);
	}
}

#endif