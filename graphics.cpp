#include "graphics.h"

Graphics::Graphics()
{
	d3d_ = new D3DRendering();
}

bool Graphics::Init(HWND hwnd)
{
	return d3d_->Init(hwnd);
}

void Graphics::BeginFrame()
{
	d3d_->ClearBackground();
}

void Graphics::EndFrame()
{
	d3d_->EndRender();
}
