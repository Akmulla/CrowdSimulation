#pragma once

#include <d3d11.h>

#pragma comment(lib, "d3d11.lib")
#pragma comment(lib,"D3DCompiler.lib")

class D3DRendering
{
public:
	D3DRendering();
	bool Init(HWND hwnd);
	void ClearBackground();
	void EndRender();
	ID3D11Resource* CreateSpriteTexture(const wchar_t* spritePath);
	ID3D11VertexShader* CreateVertexShader(const wchar_t* shader_path);
	ID3D11PixelShader* CreatePixelShader(const wchar_t* shader_path);
private:
	IDXGISwapChain* swap_chain_;
	ID3D11Device* device_;
	ID3D11DeviceContext* context_;
	ID3D11RenderTargetView* target_view_;
};