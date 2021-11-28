#pragma once

struct Vector2
{
public:
	float x;
	float y;

	Vector2(float x, float y);
	Vector2 operator+ (const Vector2& right);
	Vector2 operator- (const Vector2& right);
};

//Vector2 operator+(const Vector2& left, const Vector2& right);