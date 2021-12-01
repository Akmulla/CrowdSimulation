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

	XMVECTOR position = XMVectorSet(pos_.x, pos_.y, 0, 1);

	//DirectX::XMFLOAT3 up, position, lookAt;

	//// Setup the vector that points upwards.
	//up.x = 0.0f;
	//up.y = 1.0f;
	//up.z = 0.0f;

	//// Setup the position of the camera in the world.
	//position.x = this->pos.x;
	//position.y = this->pos.y;
	//position.z = -10.0f;

	//// Setup where the camera is looking by default.
	//lookAt.x = 0.0f;
	//lookAt.y = 0.0f;
	//lookAt.z = 1.0f;

	//lookAt = position + lookAt;
}