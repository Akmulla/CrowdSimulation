#include "camera.h"

Camera::Camera(Vector2 pos, float near_clip_dist, float far_clip_dist, float width, float height)
{
	pos_ = pos;
	near_clip_dist_ = near_clip_dist;
	far_clip_dist_ = far_clip_dist;
	width_ = width;
	height_ = height;
}

Camera::~Camera()
{

}

void Camera::GetViewMatrix(DirectX::XMMATRIX& view_matrix)
{
	using namespace DirectX;

	XMVECTOR position = XMVectorSet(pos_.x, pos_.y, -10, 1);
	XMVECTOR focus = XMVectorSet(pos_.x, pos_.y, 0, 1);
	XMVECTOR up = XMVectorSet(0,1,0,1);

	view_matrix = XMMatrixLookAtLH(position, focus, up);
}