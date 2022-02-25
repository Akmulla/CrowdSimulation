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
	//ID3D11Resource* texture = d3d_->CreateSpriteTexture(sprite_path);
	//Creating new shader each time for now. Should reuse one compiled shader for all sprites.
	ID3D11VertexShader* vertex_shader = d3d_->CreateVertexShader(vertex_shader_path);
	ID3D11PixelShader* pixel_shader = d3d_->CreatePixelShader(pixel_shader_path);

	ID3D11Resource* texture;
	ID3D11ShaderResourceView* texture_view;
	ID3D11SamplerState* sampler_state;

	Sprite* sprite = new Sprite();
	//sprite->Initialize(texture, 

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
