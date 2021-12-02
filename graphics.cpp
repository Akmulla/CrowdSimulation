#include "graphics.h"

Graphics::Graphics()
{
	d3d_ = new D3DRendering();
}

Graphics::~Graphics()
{
	delete d3d_;
}

bool Graphics::Init(HWND hwnd)
{
	return d3d_->Init(hwnd);
}

Sprite* Graphics::CreateSprite(const wchar_t* sprite_path, const wchar_t* vertex_shader_path, const wchar_t* pixel_shader_path)
{
	ID3D11Resource* texture = d3d_->CreateSpriteTexture(sprite_path);
	//ID3D11VertexShader* 
	return nullptr;
}

void Graphics::BeginFrame()
{
	d3d_->ClearBackground();
}

void Graphics::EndFrame()
{
	d3d_->EndRender();
}
