#include "VecMatrix.h"


Vector2::Vector2() {};
Vector2::Vector2(float xx, float yy) : x(xx), y(yy) {}


bool Vector2::operator==(const Vector2 &A)
{
	return x == A.x && y == A.y;
}
std::ostream& operator<<(std::ostream& os, const Vector2 vec)
{
	os << '<' << vec.x << ',' << vec.y << '>';
	return os;
}

Vector2 Vector2::operator +(const Vector2 &A)
{
	Vector2 temp = Vector2(x + A.x, y + A.y);
	return temp;
}

Vector2 Vector2::operator -(const Vector2 &A)
{
	Vector2 temp = Vector2(x - A.x, y - A.y);
	return temp;
}

Vector2 Vector2::operator *(float Mult)
{
	Vector2 temp = Vector2(x * Mult, y * Mult);
	return temp;
}

float Vector2::Magnitude()
{
	return sqrt((x*x) + (y*y));
}

Vector2 Vector2::Normalize()
{
	Vector2 temp = Vector2(x / Magnitude(), y / Magnitude());
	return temp;
}

float Vector2::DotProduct(const Vector2 &A)
{
	return (x * A.x) + (y * A.y);
}


Vector3::Vector3() {}

Vector3::Vector3(float xpos, float ypos, float zpos) : x(xpos), y(ypos), z(zpos)
{
	VecArray[0] = xpos;
	VecArray[1] = ypos;
	VecArray[2] = zpos;
}
std::ostream& operator<<(std::ostream& os, const Vector3 vec)
{
	os << '<' << vec.VecArray[0] << ',' << vec.VecArray[1] << ',' << vec.VecArray[2] << '>';
	return os;
}

Vector3 Vector3::operator *(float Scalar)
{
	Vector3 temp = Vector3(x*Scalar, y*Scalar, z*Scalar);
	return temp;
}

float Vector3::Magnitude()
{
	return sqrt(x*x + y*y + z*z);
}
Vector3 Vector3::Normalize()
{
	Vector3 temp = Vector3(x / Magnitude(), y / Magnitude(), z / Magnitude());
	return temp;
}
float Vector3::DotProduct(const Vector3 &B)
{
	return ((x*B.x) + (y*B.y) + (z*B.z));
}
Vector3 Vector3::CrossProduct(const Vector3 &B)
{
	Vector3 temp = Vector3((y*B.z) - (z*B.y), (x*B.z) - (z*B.x), (x*B.y) - (y*B.x));
	return temp;
}
Vector3 Vector3::operator +(const Vector3 &B)
{
	Vector3 temp = Vector3(x + B.x, y + B.y, z + B.z);
	return temp;
}
Vector3 Vector3::operator -(const Vector3 &B)
{
	Vector3 temp = Vector3(x - B.x, y - B.y, z - B.z);
	return temp;
}
bool Vector3::operator==(const Vector3 &B)
{
	return x == B.x&&y == B.y&&z == B.z;
}




Vector4::Vector4() {}
Vector4::Vector4(float xpos, float ypos, float zpos, float wpos) :x(xpos), y(ypos), z(zpos), w(wpos)
{
	VecArray[0] = xpos;
	VecArray[1] = ypos;
	VecArray[2] = zpos;
	VecArray[3] = wpos;
}
std::ostream& operator<<(std::ostream& os, const Vector4 vec)
{
	os << '<' << vec.VecArray[0] << ',' << vec.VecArray[1] << ',' << vec.VecArray[2] << ',' << vec.VecArray[3] << '>';
	return os;
}
Vector4 Vector4::operator*(float scalar)
{
	Vector4 temp = Vector4(x*scalar, y*scalar, z*scalar, w*scalar);
	return temp;
}
float Vector4::Magnitude()
{
	return sqrt(x*x + y*y + z*z + w*w);
}
Vector4 Vector4::Normalize()
{
	Vector4 temp = Vector4(x / Magnitude(), y / Magnitude(), z / Magnitude(), w / Magnitude());
	return temp;
}
float Vector4::DotProduct(const Vector4 &B)
{
	return ((x*B.x) + (y*B.y) + (z*B.z) + (w*B.w));
}
Vector4 Vector4::operator +(const Vector4 &B)
{
	Vector4 temp = Vector4(x + B.x, y + B.y, z + B.z, w + B.w);
	return temp;
}
Vector4 Vector4::operator -(const Vector4 &B)
{
	Vector4 temp = Vector4(x - B.x, y - B.y, z - B.z, w - B.w);
	return temp;
}
bool Vector4::operator==(const Vector4 &B)
{
	return x == B.x&&y == B.y&&z == B.z&&w == B.w;
}


Mat2::Mat2(float a[2][2])
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			matrix[i][j] = a[i][j];
		}
	}
}
//
Mat2::Mat2(float a, float b, float c, float d)
{
	matrix[0][0] = a;
	matrix[0][1] = b;
	matrix[1][0] = c;
	matrix[1][1] = d;
}
std::ostream& operator<<(std::ostream& os, const Mat2 mat)
{
	for (int i = 0; i < 4; i++)
	{
		if (i % 2 == 0)
			os << "\n";
		os << mat.matrix[i / 2][i % 2] << " ";
	}
	return os;
}
void Mat2::print()
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			std::cout << matrix[i][j] << ", ";
		}
	}
}
Vector2 Mat2::operator *(const Vector2 &vec)const
{
	Vector2 temp = Vector2(vec.x*matrix[0][0] + vec.y*matrix[1][0], vec.x*matrix[0][1] + vec.y*matrix[1][1]);
	return temp;
}
Mat2 Mat2::operator *(const Mat2 &mat)const
{
	Mat2 temp = Mat2(matrix[0][0] * mat.matrix[0][0] + matrix[0][1] * mat.matrix[1][0], matrix[0][0] * mat.matrix[0][1] + matrix[0][1] * mat.matrix[1][1], matrix[1][0] * mat.matrix[0][0] + matrix[1][1] * mat.matrix[1][0], matrix[1][0] * mat.matrix[0][1] + matrix[1][1] * mat.matrix[1][1]);
	return temp;
}



Mat3::Mat3() {}
Mat3::Mat3(float a[3][3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			matrix[i][j] = a[i][j];
		}
	}
}
Mat3::Mat3(float a, float b, float c, float d, float e, float f, float g, float h, float i)
{
	matrix[0][0] = a;
	matrix[0][1] = b;
	matrix[0][2] = c;
	matrix[1][0] = d;
	matrix[1][1] = e;
	matrix[1][2] = f;
	matrix[2][0] = g;
	matrix[2][1] = h;
	matrix[2][2] = i;
}
std::ostream& operator<<(std::ostream& os, const Mat3 mat)
{
	for (int i = 0; i < 9; i++)
	{
		if (i % 3 == 0)
			os << "\n";
		os << mat.matrix[i / 3][i % 3] << " ";
	}
	return os;
}
void Mat3::print()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << matrix[i][j] << ", ";
		}
	}
}
Vector3 Mat3::operator *(const Vector3 &vec)
{
	Vector3 temp = Vector3(0, 0, 0);
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			temp.VecArray[i] += vec.VecArray[j] * matrix[j][i];

		}
	}
	return temp;
}
Mat3 Mat3::operator *(const Mat3 &mat)
{
	Mat3 temp = Mat3(0, 0, 0, 0, 0, 0, 0, 0, 0);

	//THIRD AND FINAL ATTEMPT(WORKS) 
	for (int i = 0; i < 27; i++)
	{
		temp.matrix[i / 9][(i % 9) / 3] += matrix[(i / 9)][i % 3] * mat.matrix[i % 3][(i % 9) / 3];
	}
	return temp;
}
Mat3 Mat3::setRotateX(float angle)
{
	Mat3 RotationalX = Mat3(1, 0, 0, 0, cos(angle), -sin(angle), 0, sin(angle), cos(angle));
	*this = RotationalX**this;
	//*this = *this*RotationalX;
	return *this;
}
Mat3 Mat3::setRotateY(float angle)
{
	Mat3 RotationalY = Mat3(cos(angle), 0, sin(angle), 0, 1, 0, -sin(angle), 0, cos(angle));
	*this = RotationalY**this;
	return *this;
}
Mat3 Mat3::setRotateZ(float angle)
{
	Mat3 RotationalZ = Mat3(cos(angle), -sin(angle), 0, sin(angle), cos(angle), 0, 0, 0, 1);
	*this = RotationalZ**this;
	return *this;
}


Mat4::Mat4(float a[4][4])
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			matrix[i][j] = a[i][j];
		}
	}
}
Mat4::Mat4(float a, float b, float c, float d, float e, float f, float g, float h, float i, float j, float k, float l, float m, float n, float o, float p)
{
	matrix[0][0] = a;
	matrix[0][1] = b;
	matrix[0][2] = c;
	matrix[0][3] = d;
	matrix[1][0] = e;
	matrix[1][1] = f;
	matrix[1][2] = g;
	matrix[1][3] = h;
	matrix[2][0] = i;
	matrix[2][1] = j;
	matrix[2][2] = k;
	matrix[2][3] = l;
	matrix[3][0] = m;
	matrix[3][1] = n;
	matrix[3][2] = o;
	matrix[3][3] = p;
}
std::ostream& operator<<(std::ostream& os, const Mat4 mat)
{
	for (int i = 0; i < 16; i++)
	{
		if (i % 4 == 0)
			os << "\n";
		os << mat.matrix[i / 4][i % 4] << " ";
	}
	return os;
}
void Mat4::print()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			std::cout << matrix[i][j] << ", ";
		}
	}
}
Mat4 Mat4::operator *(const Mat4 &mat) const
{
	Mat4 temp = Mat4(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	for (int i = 0; i < 64; i++)
	{
		temp.matrix[i / 16][(i % 16) / 4] += matrix[(i / 16)][i % 4] * mat.matrix[i % 4][(i % 16) / 4];
	}
	return temp;
}
Vector4 Mat4::operator *(const Vector4 &vec)const
{
	Vector4 temp = Vector4(0, 0, 0, 0);
	for (int i = 0; i < 16; i++)
	{
		temp.VecArray[i / 4] += matrix[i % 4][i / 4] * vec.VecArray[i % 4];
	}
	return temp;
}
Mat4 Mat4::setRotateX(float angle)
{
	Mat4 RotationalX = Mat4(1, 0, 0, 0, 0, cos(angle), -sin(angle), 0, 0, sin(angle), cos(angle), 0, 0, 0, 0, 1);
	*this = RotationalX**this;
	return *this;
}
Mat4 Mat4::setRotateY(float angle)
{
	Mat4 RotationalY = Mat4(cos(angle), 0, sin(angle), 0, 0, 1, 0, 0, -sin(angle), 0, cos(angle), 0, 0, 0, 0, 1);
	*this = RotationalY**this;
	return *this;
}
Mat4 Mat4::setRotateZ(float angle)
{
	Mat4 RotationalZ = Mat4(cos(angle), -sin(angle), 0, 0, sin(angle), cos(angle), 0, 0, 0, 0, 1, 0, 0, 0, 0, 1);
	*this = RotationalZ**this;
	return *this;
}