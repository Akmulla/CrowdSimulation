#pragma once
#include <d3d11.h>
#include "d3d_rendering.h"

#pragma comment(lib, "d3d11.lib")
#pragma comment(lib,"D3DCompiler.lib")

class Graphics
{
public:
	Graphics(HWND hwnd);
private:
	D3DRendering* d3d_;
};