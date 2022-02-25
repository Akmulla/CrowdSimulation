#pragma once

#include "math.h"
#include "sprite.h"

class GameObject
{
public:
	Sprite* sprite_;
	Vector2 position_;

	GameObject();
	~GameObject();
};