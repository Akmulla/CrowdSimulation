#include "game_object.h"

GameObject::GameObject()
{
	sprite_ = nullptr;
	position_ = Vector2(0.0f, 0.0f);
}

GameObject::~GameObject()
{
}