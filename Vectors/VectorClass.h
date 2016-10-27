#pragma once
#include<math.h>
class Vector
{
public:
	Vector() {}
	Vector(float xpos, float ypos) :x(xpos), y(ypos) {}
	void Add(const Vector &B)
	{
		x += B.x;
		y += B.y;
	}
	void Subtract(const Vector &B)
	{
		x -= B.x;
		y -= B.y;
	}
	void ScalarMult(float Scalar)
	{
		x *= Scalar;
		y *= Scalar;
	}
	Vector operator+(Vector B)
	{

	}
private:
	float x,y;
};