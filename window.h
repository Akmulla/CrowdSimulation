#pragma once
#include <Windows.h>
#include "graphics.h"

class Window
{
public:
	Window(HINSTANCE hInstance);
private:
	HWND hwnd_;
	Graphics* graphics_;
};