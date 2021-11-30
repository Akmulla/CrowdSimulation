#pragma once
#include <d3d11.h>

#pragma comment(lib, "d3d11.lib")
#pragma comment(lib,"D3DCompiler.lib")

class D3DRendering
{
public:
	D3DRendering();
	bool Init(HWND hwnd);
private:
	IDXGISwapChain* swapChain_;
	ID3D11Device* device_;
	ID3D11DeviceContext* context_;
	ID3D11RenderTargetView* target_view_;
};