#pragma once

#include "d3d_rendering.h"

class Graphics
{
public:
	Graphics();
	bool Init(HWND hwnd);
private:
	D3DRendering* d3d_;
};