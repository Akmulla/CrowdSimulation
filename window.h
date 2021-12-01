#pragma once
#include <Windows.h>
#include "graphics.h"

class Window
{
public:
	Window(HINSTANCE hInstance);
	~Window();
	bool InitGraphics();
	void Render();
private:
	HWND hwnd_;
	Graphics* graphics_;
};