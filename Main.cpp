#include <stdio.h>
#include <Windows.h>
#include "window.h"

int CALLBACK WinMain(
	_In_ HINSTANCE hInstance,
	_In_opt_  HINSTANCE hPrevInstance,
	_In_ LPSTR lpCmdLine,
	_In_ int nCmdShow)
{
	Window window(hInstance);

	if (!window.InitGraphics())
	{
		return 1;
	}

	while (true)
	{
		window.Render();
	}
	return 0;
}
