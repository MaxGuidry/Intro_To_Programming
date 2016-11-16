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
		Vector2 temp = Vector2(x + A.x, y + A.y);
		return temp;
	}
	Vector2 operator -(const Vector2 &A)
	{
		Vector2 temp = Vector2(x - A.x, y - A.y);
		return temp;
	}
	Vector2 operator *(float Mult)
	{
		Vector2 temp = Vector2(x * Mult, y * Mult);
		return temp;
	}
	float Magnitude()
	{
		return sqrt((x*x) + (y*y));
	}
	Vector2 Normalize()
	{
		Vector2 temp = Vector2(x / Magnitude(), y / Magnitude());
		return temp;
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
		Vector3 temp = Vector3(x*Scalar, y*Scalar, z*Scalar);
		return temp;
	}
	float Magnitude()
	{
		return sqrt(x*x + y*y + z*z);
	}
	Vector3 Normalize()
	{
		Vector3 temp = Vector3(x / Magnitude(), y / Magnitude(), z / Magnitude());
		return temp;
	}
	float DotProduct(const Vector3 &B)
	{
		return ((x*B.x) + (y*B.y) + (z*B.z));
	}
	Vector3 CrossProduct(const Vector3 &B)
	{
		Vector3 temp = Vector3((y*B.z) - (z*B.y), (x*B.z) - (z*B.x), (x*B.y) - (y*B.x));
		return temp;
	}
	Vector3 operator +(const Vector3 &B)
	{
		Vector3 temp = Vector3(x + B.x, y + B.y, z + B.z);
		return temp;
	}
	Vector3 operator -(const Vector3 &B)
	{
		Vector3 temp = Vector3(x - B.x, y - B.y, z - B.z);
		return temp;
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
	Vector4(float xpos, float ypos, float zpos, float wpos) :x(xpos), y(ypos), z(zpos), w(wpos)
	{
		VecArray[0] = xpos;
		VecArray[1] = ypos;
		VecArray[2] = zpos;
		VecArray[3] = wpos;
	}

	Vector4 operator*(float scalar)
	{
		Vector4 temp = Vector4(x*scalar, y*scalar, z*scalar, w*scalar);
		return temp;
	}
	float Magnitude()
	{
		return sqrt(x*x + y*y + z*z + w*w);
	}
	Vector4 Normalize()
	{
		Vector4 temp = Vector4(x / Magnitude(), y / Magnitude(), z / Magnitude(), w / Magnitude());
		return temp;
	}
	float DotProduct(const Vector4 &B)
	{
		return ((x*B.x) + (y*B.y) + (z*B.z) + (w*B.w));
	}
	Vector4 operator +(const Vector4 &B)
	{
		Vector4 temp = Vector4(x + B.x, y + B.y, z + B.z, w + B.w);
		return temp;
	}
	Vector4 operator -(const Vector4 &B)
	{
		Vector4 temp = Vector4(x - B.x, y - B.y, z - B.z, w - B.w);
		return temp;
	}
	bool operator==(const Vector4 &B)
	{
		return x == B.x&&y == B.y&&z == B.z&&w == B.w;
	}
	float VecArray[4];
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
	Vector2 operator *(const Vector2 &vec)const
	{
		Vector2 temp = Vector2(vec.x*mat2[0][0] + vec.y*mat2[0][1], vec.x*mat2[1][0] + vec.y*mat2[1][1]);
		return temp;
	}
	Mat2 operator *(const Mat2 &mat)
	{
		Mat2 temp = Mat2(mat2[0][0] * mat.mat2[0][0] + mat2[0][1] * mat.mat2[1][0], mat2[0][0] * mat.mat2[0][1] + mat2[0][1] * mat.mat2[1][1], mat2[1][0] * mat.mat2[0][0] + mat2[1][1] * mat.mat2[1][0], mat2[1][0] * mat.mat2[0][1] + mat2[1][1] * mat.mat2[1][1]);
		return temp;
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
	//NAME: operator *
	//ARGUMENTS: one argument of a 3x3 matrix
	//DESCRIPTION: creates matrix temp of all zeros then sets this temp equal to the two matrices multiplied together
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
	//NAME: operator *
	//ARGUMENTS: one argument of a 3d vector
	//DESCRIPTION: creates a vector temp of all zeros then loops through the multiplication of the vector and matrix
	//setting the temp equal to the product and returns the temp vector
	Mat3 operator *(const Mat3 &mat)
	{
		Mat3 temp = Mat3(0, 0, 0, 0, 0, 0, 0, 0, 0);

		//THIRD AND FINAL ATTEMPT(WORKS) 
		for (int i = 0; i < 27; i++)
		{
			temp.mat3[i / 9][(i % 9) / 3] += mat3[(i / 9)][i % 3] * mat.mat3[i % 3][(i % 9) / 3];
		}
		return temp;
	}
	//NAME: setRotateX
	//ARGUMENTS: one argument of type float
	//DESCRIPTION: function for rotation around the X axis using the overloaded multiplication operators and returns
	//the current instance of the matrix
	Mat3 setRotateX(float angle)
	{
		Mat3 RotationalX = Mat3(1, 0, 0, 0, cos(angle), -sin(angle), 0, sin(angle), cos(angle));
		*this = *this*RotationalX;
		return *this;
	}
	//NAME: setRotateY
	//ARGUMENTS: one argument of type float
	//DESCRIPTION: function for rotation around the Y axis using the overloaded multiplication operators and returns
	//the current instance of the matrix
	Mat3 setRotateY(float angle)
	{
		Mat3 RotationalY = Mat3(cos(angle), 0, sin(angle), 0, 1, 0, -sin(angle), 0, cos(angle));
		*this = *this*RotationalY;
		return *this;
	}
	//NAME: setRotateZ
	//ARGUMENTS: one argument of type float
	//DESCRIPTION: function for rotation around the Z axis using the overloaded multiplication operators and returns
	//the current instance of the matrix
	Mat3 setRotateZ(float angle)
	{
		Mat3 RotationalZ = Mat3(cos(angle), -sin(angle), 0, sin(angle), cos(angle), 0, 0, 0, 1);
		*this = *this* RotationalZ;
		return *this;
	}
private:
	float mat3[3][3];
};

class Mat4
{
public:
	//Two constructors 
	//Constructor that takes in a 2x2 array to initialize the matrix
	Mat4(float a[4][4])
	{
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				mat4[i][j] = a[i][j];
			}
		}
	}
	//Constructor that takes in 16 float values to initialize the matrix
	Mat4(float a, float b, float c, float d, float e, float f, float g, float h, float i, float j, float k, float l, float m, float n, float o, float p)
	{
		mat4[0][0] = a;
		mat4[0][1] = b;
		mat4[0][2] = c;
		mat4[0][3] = d;
		mat4[1][0] = e;
		mat4[1][1] = f;
		mat4[1][2] = g;
		mat4[1][3] = h;
		mat4[2][0] = i;
		mat4[2][1] = j;
		mat4[2][2] = k;
		mat4[2][3] = l;
		mat4[3][0] = m;
		mat4[3][1] = n;
		mat4[3][2] = o;
		mat4[3][3] = p;
	}
	//NAME: operator *
	//ARGUMENTS: one argument of a 4x4 matrix
	//DESCRIPTION: creates matrix temp of all zeros then sets this temp equal to the two matrices multiplied together
	Mat4 operator *(const Mat4 &mat) const
	{
		Mat4 temp = Mat4(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		for (int i = 0; i < 64; i++)
		{
			temp.mat4[i / 16][(i % 16) / 4] += mat4[(i / 16)][i % 4] * mat.mat4[i % 4][(i % 16) / 4];
		}
		return temp;
	}
	//NAME: operator *
	//ARGUMENTS: one argument of a 4d vector
	//DESCRIPTION: creates a vector temp of all zeros then loops through the multiplication of the vector and matrix
	//setting the temp equal to the product and returns the temp vector
	Vector4 operator *(const Vector4 &vec)const
	{
		Vector4 temp = Vector4(0, 0, 0, 0);
		for (int i = 0; i < 16; i++)
		{
			temp.VecArray[i / 4] += mat4[i / 4][i % 4] * vec.VecArray[i % 4];
		}
		return temp;
	}
	//NAME: setRotateX
	//ARGUMENTS: one argument of type float
	//DESCRIPTION: function for rotation around the x axis using the overloaded multiplication operators and returns
	//the current instance of the matrix
	Mat4 setRotateX(float angle)
	{
		Mat4 RotationalX = Mat4(1, 0, 0, 0, 0, cos(angle), -sin(angle), 0, 0, sin(angle), cos(angle), 0, 0, 0, 0, 1);
		*this = *this*RotationalX;
		return *this;
	}
	//NAME: setRotateY
	//ARGUMENTS: one argument of type float
	//DESCRIPTION: function for rotation around the y axis using the overloaded multiplication operators and returns
	//the current instance of the matrix
	Mat4 setRotateY(float angle)
	{
		Mat4 RotationalY = Mat4(cos(angle), 0, sin(angle), 0, 0, 1, 0, 0, -sin(angle), 0, cos(angle), 0, 0, 0, 0, 1);
		*this = *this*RotationalY;
		return *this;
	}	
	//NAME: setRotateZ
	//ARGUMENTS: one arguments of type float
	//DESCRIPTION: function for rotation around the z axis using the overloaded multipication operators and returns
	//the current instance of the matrix
	Mat4 setRotateZ(float angle)
	{
		Mat4 RotationalZ = Mat4(cos(angle), -sin(angle), 0, 0, sin(angle), cos(angle), 0, 0, 0, 0, 1, 0, 0, 0, 0, 1);
		*this = *this*RotationalZ;
		return *this;
	}
private:
	float mat4[4][4];

};