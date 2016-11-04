#pragma once

template <class T>
class Vector2D
{
public:
	Vector2D() {};
	Vector2D<T>(T xx, T yy) : x(xx), y(yy) {}
	bool operator == (const Vector2D<T> &A)
	{
		return x == A.x && y == A.y;
	}
	Vector2D<T> operator +(const Vector2D<T> &A)
	{
		return Vector2D(x + A.x, y + A.y);
	}
	Vector2D<T> operator -(const Vector2D<T> &A)
	{
		return Vector2D(x - A.x, y - A.y);
	}
	Vector2D<T> operator *(T Mult)
	{
		return Vector2D(x * Mult, y * Mult);
	}
	T Magnitude()
	{
		return sqrt((x*x) + (y*y));
	}
	Vector2D<T> Normalize()
	{
		return Vector2D(x / Magnitude(), y / Magnitude());
	}
	T DotProduct(const Vector2D<T> &A)
	{
		return (x * A.x) + (y * A.y);
	}
private:
	T x, y;
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