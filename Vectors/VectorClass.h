#pragma once

class Vector2
{
public:
	Vector2() {}
	Vector2(float xpos, float ypos) :x(xpos), y(ypos) {}
	Vector2 Add(const Vector2 &B)
	{
		return Vector2(x + B.x, y + B.y);
	}
	Vector2 Subtract(const Vector2 &B)
	{
		return Vector2(x - B.x, y - B.y);
	}
	Vector2 ScalarMult(float Scalar)
	{
		return Vector2(x*Scalar, y*Scalar);
	}
private:
	float x, y;
};
template<typename T>
class Vector3
{
public:
	Vector3() {}
	Vector3<T>(T xpos, T ypos, T zpos) :x(xpos), y(ypos), z(zpos) {}
	Vector3 ScalarMult(T Scalar)
	{
		return Vector3(x*Scalar, y*Scalar, z*Scalar);
	}
	T Magnitude()
	{
		return sqrt(x*x + y*y + z*z);
	}
	Vector3 Normalize()
	{
		return Vector3(x / Magnitude(), y / Magnitude(), z / Magnitude());
	}
	T DotProduct(const Vector3<T> &B)
	{
		return ((x*B.x) + (y*B.y) + (z*B.z));
	}
	Vector3 CrossProduct(const Vector3 &B)
	{
		return Vector3((y*B.z) - (z*B.y), (x*B.z) - (z*B.x), (x*B.y) - (y*B.x));
	}
	Vector3 operator +(const Vector3 &B)
	{
		return Vector3(x + B.x, y + B.y, z + B.z);
	}
	Vector3 operator -(const Vector3 &B)
	{
		return Vector3(x - B.x, y - B.y, z - B.z);
	}
	bool operator==(const Vector3 &B)
	{
		return x == B.x&&y == B.y&&z == B.z;
	}
private:
	T x, y, z;
};