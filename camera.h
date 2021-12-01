#pragma once
#include <DirectXMath.h>
#include "math.h"

class Camera
{
public:
	Camera(Vector2 pos, float near_clip_dist, float far_clip_dist, float width, float height);
	~Camera();
	void GetViewMatrix(DirectX::XMMATRIX&);
private:
	Vector2 pos_;
	float near_clip_dist_;
	float far_clip_dist_;
	float width_;
	float height_;
};