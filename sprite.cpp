#include "sprite.h"

Sprite::Sprite()
{
	vertex_shader_ = nullptr;
	pixel_shader_ = nullptr;

	sprite_texture_ = nullptr;
	texture_view_ = nullptr;
	sampler_state_ = nullptr;
}

Sprite::~Sprite()
{

}

void Sprite::Initialize(ID3D11Resource* sprite_texture, ID3D11ShaderResourceView* texture_view, ID3D11SamplerState* sampler_state)
{
	sprite_texture_ = sprite_texture;
	texture_view_ = texture_view;
	sampler_state_ = sampler_state;
}

void Sprite::SetVertexShader(ID3D11VertexShader* vertex_shader)
{
	vertex_shader_ = vertex_shader;
}

void Sprite::SetPixelShader(ID3D11PixelShader* pixel_shader)
{
	pixel_shader_ = pixel_shader;
}
