#pragma once

struct Vector2
{
public:
	float x;
	float y;

	Vector2();
	Vector2(float x, float y);

	Vector2 operator+ (const Vector2& right);
	Vector2 operator- (const Vector2& right);
	Vector2 operator/ (float denominator);
	float Magnitude();
	Vector2 Direction();
	void Normalize();
};

float Dot(const Vector2& left, const Vector2& right);
