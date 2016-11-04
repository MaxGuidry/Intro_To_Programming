#pragma once
#include<iostream>
#include<time.h>
#include<Windows.h>

class Vector2
{
public:
	Vector2() {};
	Vector2(float xx, float yy) : x(xx), y(yy) {}
	bool operator == (const Vector2 &A)
	{
		return x == A.x && y == A.y;
	}
	Vector2 operator +(const Vector2 &A)
	{
		return Vector2(x + A.x, y + A.y);
	}
	Vector2 operator -(const Vector2 &A)
	{
		return Vector2(x - A.x, y - A.y);
	}
	Vector2 operator *(float Mult)
	{
		return Vector2(x * Mult, y * Mult);
	}
	float Magnitude()
	{
		return sqrt((x*x) + (y*y));
	}
	Vector2 Normalize()
	{
		return Vector2(x / Magnitude(), y / Magnitude());
	}
	float DotProduct(const Vector2 &A)
	{
		return (x * A.x) + (y * A.y);
	}
	float x, y;
};

class Vector3
{
public:
	Vector3() {}
	Vector3(float xpos, float ypos, float zpos) : x(xpos), y(ypos), z(zpos)
	{
		VecArray[0] = xpos;
		VecArray[1] = ypos;
		VecArray[2] = zpos;
	}
	Vector3 ScalarMult(float Scalar)
	{
		return Vector3(x*Scalar, y*Scalar, z*Scalar);
	}
	float Magnitude()
	{
		return sqrt(x*x + y*y + z*z);
	}
	Vector3 Normalize()
	{
		return Vector3(x / Magnitude(), y / Magnitude(), z / Magnitude());
	}
	float DotProduct(const Vector3 &B)
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
	float VecArray[3];
	float x, y, z;
};

class Vector4
{
public:
	Vector4() {}
	Vector4(float xpos, float ypos, float zpos, float wpos) :x(xpos), y(ypos), z(zpos), w(wpos) {}
	Vector4 operator*(float scalar)
	{
		return Vector4(x*scalar, y*scalar, z*scalar, w*scalar);
	}
	float Magnitude()
	{
		return sqrt(x*x + y*y + z*z + w*w);
	}
	Vector4 Normalize()
	{
		return Vector4(x / Magnitude(), y / Magnitude(), z / Magnitude(), w / Magnitude());
	}
	float DotProduct(const Vector4 &B)
	{
		return ((x*B.x) + (y*B.y) + (z*B.z) + (w*B.w));
	}
	Vector4 operator +(const Vector4 &B)
	{
		return Vector4(x + B.x, y + B.y, z + B.z, w + B.w);
	}
	Vector4 operator -(const Vector4 &B)
	{
		return Vector4(x - B.x, y - B.y, z - B.z, w - B.w);
	}
	bool operator==(const Vector4 &B)
	{
		return x == B.x&&y == B.y&&z == B.z&&w == B.w;
	}
private:
	float x, y, z, w;
};

class Mat2
{
public:
	Mat2() {}
	Mat2(float a[2][2])
	{
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				mat2[i][j] = a[i][j];
			}
		}
	}
	Mat2(float a, float b, float c, float d)
	{
		mat2[0][0] = a;
		mat2[0][1] = b;
		mat2[1][0] = c;
		mat2[1][1] = d;
	}
	void print()
	{
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				std::cout << mat2[i][j] << ", ";
			}
		}
	}
	Vector2 operator *(const Vector2 &vec)
	{
		return Vector2(vec.x*mat2[0][0] + vec.y*mat2[0][1], vec.x*mat2[1][0] + vec.y*mat2[1][1]);
	}
	Mat2 operator *(const Mat2 &mat)
	{
		return Mat2(mat2[0][0] * mat.mat2[0][0] + mat2[0][1] * mat.mat2[1][0], mat2[0][0] * mat.mat2[0][1] + mat2[0][1] * mat.mat2[1][1], mat2[1][0] * mat.mat2[0][0] + mat2[1][1] * mat.mat2[1][0], mat2[1][0] * mat.mat2[0][1] + mat2[1][1] * mat.mat2[1][1]);
	}
private:
	float mat2[2][2];
};

class Mat3
{
public:
	Mat3() {}
	Mat3(float a[3][3])
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				mat3[i][j] = a[i][j];
			}
		}
	}
	Mat3(float a, float b, float c, float d, float e, float f, float g, float h, float i)
	{
		mat3[0][0] = a;
		mat3[0][1] = b;
		mat3[0][2] = c;
		mat3[1][0] = d;
		mat3[1][1] = e;
		mat3[1][2] = f;
		mat3[2][0] = g;
		mat3[2][1] = h;
		mat3[2][2] = i;

	}
	void print()
	{
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				std::cout << mat3[i][j] << ", ";
			}
		}
	}
	Vector3 operator *(const Vector3 &vec)
	{
		Vector3 temp = Vector3(0, 0, 0);
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				temp.VecArray[i] += vec.VecArray[j] * mat3[i][j];

			}
		}
		return temp;
	}
	Mat3 operator *(const Mat3 &mat)
	{
		Mat3 temp = Mat3(0, 0, 0, 0, 0, 0, 0, 0, 0);

		/*for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				for (int k = 0; k < 3; k++)
				{
					temp.mat3[i][j] += mat3[i][k] * mat.mat3[k][j];
				}
			}
		}*/
		for (int i = 1; i < 4; i++)
		{
			for (int j = 1; j < 10; j++)
			{
				temp.mat3[j%3][j%i] += mat3[i-1][j%3] * mat.mat3[i-1][j%3];
			}
		}
		return temp;
	}
private:
	float mat3[3][3];
};

class Mat4
{

};