#include "math.h"

Vector2::Vector2()
{
	this->x = 0;
	this->y = 0;
}

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

float Dot(const Vector2& right)
{

}

float Vector2::Magnitude()
{
	return 0.0f;
}


Vector2 Vector2::Direction()
{
	
}

void Vector2::Normalize()
{
	
}