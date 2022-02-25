#pragma once
#include <d3d11.h>

class Sprite
{
public:
	Sprite();
	~Sprite();
	void Initialize(ID3D11Resource* sprite_texture, ID3D11ShaderResourceView* texture_view_, ID3D11SamplerState* sampler_state_);
	void SetVertexShader(ID3D11VertexShader* vertex_shader);
	void SetPixelShader(ID3D11PixelShader* pixel_shader);
private:
	ID3D11VertexShader* vertex_shader_;
	ID3D11PixelShader* pixel_shader_;

	ID3D11Resource* sprite_texture_;
	ID3D11ShaderResourceView* texture_view_;
	ID3D11SamplerState* sampler_state_;
};