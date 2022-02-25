#pragma once

#include "d3d_rendering.h"
#include "sprite.h"

class Graphics
{
public:
	Graphics();
	~Graphics();
	bool Init(HWND hwnd);
	Sprite* CreateSprite(const wchar_t* sprite_path, const wchar_t* vertex_shader_path, const wchar_t* pixel_shader_path);
	void BeginFrame();
	void EndFrame();
private:
	D3DRendering* d3d_;
};