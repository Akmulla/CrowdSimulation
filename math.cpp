#include "math.h"

Vector2::Vector2(float x, float y)
{
	this->x = x;
	this->y = y;
}

Vector2 Vector2::operator+ (const Vector2& right)
{
	return Vector2(x + right.x, y + right.y );
}

Vector2 Vector2::operator- (const Vector2& right)
{
	return Vector2(x - right.x, y - right.y);
}
