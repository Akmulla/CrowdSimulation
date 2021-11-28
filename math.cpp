#include "math.h"
#include <cmath>

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
Vector2 Vector2::operator/ (float denominator)
{
	return Vector2(x / denominator, y / denominator);
}

float Dot(const Vector2& left, const Vector2& right)
{
	return left.x * right.x + left.y * right.y;
}

float Vector2::Magnitude()
{
	return std::sqrt(x * x + y * y);
}


//Vector2 Vector2::Direction()
//{
//	return Vector2()
//}

void Vector2::Normalize()
{
	
}