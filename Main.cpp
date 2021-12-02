#include <stdio.h>
#include <Windows.h>

#include "window.h"
#include "game_object.h"
#include "math.h"

GameObject* CreateGameObject(Vector2 pos)
{
	GameObject* obj = new GameObject();


	return obj;
}

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
