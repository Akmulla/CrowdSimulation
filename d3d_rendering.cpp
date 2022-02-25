#include "d3d_rendering.h"

D3DRendering::D3DRendering()
{
	swap_chain_ = nullptr;
	device_ = nullptr;
	context_ = nullptr;
	target_view_ = nullptr;
}

bool D3DRendering::Init(HWND hwnd)
{
	DXGI_SWAP_CHAIN_DESC sd;
	ZeroMemory(&sd, sizeof(DXGI_SWAP_CHAIN_DESC));

	sd.BufferDesc.Width = 0;
	sd.BufferDesc.Height = 0;
	sd.BufferDesc.Format = DXGI_FORMAT_B8G8R8A8_UNORM;
	sd.BufferDesc.RefreshRate.Numerator = 0;
	sd.BufferDesc.RefreshRate.Denominator = 0;
	sd.BufferDesc.Scaling = DXGI_MODE_SCALING_UNSPECIFIED;
	sd.BufferDesc.ScanlineOrdering = DXGI_MODE_SCANLINE_ORDER_UNSPECIFIED;
	sd.SampleDesc.Count = 1;
	sd.SampleDesc.Quality = 0;
	sd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
	sd.BufferCount = 2;
	sd.OutputWindow = hwnd;
	sd.Windowed = TRUE;
	sd.SwapEffect = DXGI_SWAP_EFFECT_SEQUENTIAL;
	sd.Flags = 0;

	const UINT feature_level_count = 2;
	D3D_FEATURE_LEVEL feature_levels[feature_level_count] = { D3D_FEATURE_LEVEL_11_1, D3D_FEATURE_LEVEL_11_0 };

	HRESULT hr = D3D11CreateDeviceAndSwapChain(
		nullptr,
		D3D_DRIVER_TYPE::D3D_DRIVER_TYPE_HARDWARE,
		nullptr,
		0,
		feature_levels,
		feature_level_count,
		D3D11_SDK_VERSION,
		&sd,
		&swap_chain_,
		&device_,
		nullptr,
		&context_
	);

	if (FAILED(hr))
	{
		OutputDebugString("\nFailed to create device and swap chain\n\n");
		return false;
	}

	ID3D11Texture2D* backBuffer;
	hr = swap_chain_->GetBuffer(0, __uuidof(ID3D11Texture2D), (void**)&backBuffer);

	if (FAILED(hr))
	{
		OutputDebugString("\nFailed to create back buffer\n\n");
		return false;
	}

	hr = device_->CreateRenderTargetView(backBuffer, nullptr, &target_view_);

	if (FAILED(hr))
	{
		OutputDebugString("\nFailed to create render target view\n\n");
		return false;
	}

	backBuffer->Release();

	context_->OMSetRenderTargets(1, &target_view_, NULL);

	D3D11_VIEWPORT viewport;
	ZeroMemory(&viewport, sizeof(D3D11_VIEWPORT));

	viewport.TopLeftX = 0;
	viewport.TopLeftY = 0;
	viewport.Width = 1024;
	viewport.Height = 768;

	context_->RSSetViewports(1, &viewport);

	return true;
}

void D3DRendering::ClearBackground()
{
	float color[] { 255,255,0,255 };
	context_->ClearRenderTargetView(target_view_, color);
}

void D3DRendering::EndRender()
{
	swap_chain_->Present(1u, 0u);
}

void D3DRendering::CreateSpriteTexture(const wchar_t* spritePath, ID3D11Resource* sprite_texture, ID3D11ShaderResourceView* texture_view, ID3D11SamplerState* sampler_state)
{

}

ID3D11VertexShader* D3DRendering::CreateVertexShader(const wchar_t* shader_path)
{
	return nullptr;
}

ID3D11PixelShader* D3DRendering::CreatePixelShader(const wchar_t* shader_path)
{
	return nullptr;
}
