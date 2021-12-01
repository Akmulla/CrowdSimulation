#include "window.h"

LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	return DefWindowProc(hwnd, uMsg, wParam, lParam);
}

Window::Window(HINSTANCE hInstance)
{
	const auto winClassName = "SimpleExampleWindowClass";
	WNDCLASSEX wc = { };
	wc.cbSize = sizeof(wc);
	wc.style = CS_OWNDC;
	wc.lpfnWndProc = WindowProc;
	wc.cbClsExtra = 0;
	wc.cbWndExtra = 0;
	wc.hInstance = hInstance;
	wc.hIcon = nullptr;
	wc.hCursor = nullptr;
	wc.hbrBackground = nullptr;
	wc.lpszMenuName = nullptr;
	wc.lpszClassName = winClassName;
	wc.hIconSm = nullptr;
	RegisterClassEx(&wc);

	hwnd_ = CreateWindowEx(
		0,
		winClassName,
		"MyWindow",
		WS_CAPTION | WS_MINIMIZEBOX | WS_SYSMENU,
		200,
		200,
		1024,
		768,
		nullptr,
		nullptr,
		hInstance,
		nullptr
	);

	graphics_ = new Graphics();

	ShowWindow(hwnd_, SW_SHOW);
}

bool Window::InitGraphics()
{
	return graphics_->Init(hwnd_);
}

void Window::Render()
{
	graphics_->BeginFrame();
	graphics_->EndFrame();
}

