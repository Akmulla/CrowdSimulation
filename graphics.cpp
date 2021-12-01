#include "graphics.h"

Graphics::Graphics()
{
	d3d_ = new D3DRendering();
}

bool Graphics::Init(HWND hwnd)
{
	return d3d_->Init(hwnd);
}