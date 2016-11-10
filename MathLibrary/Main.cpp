#include<iostream>
#include"VecMatrix.h"
#include<string>
#include<time.h>
#include<Windows.h>
#include<cassert>
const float pi = 3.14159265358979323856;
int main()
{
	float b[2][2] = { 1,2,3,4 };
	Vector4 v = Vector4(1, 2, 3, 4);
	Mat2 a = Mat2(b);
	Mat2 k = Mat2(1, 2, 3, 4);
	Mat2 test = Mat2(a*k);
	Mat4 Mat3Test = Mat4(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16);
	Mat4 second = Mat4(36,0,7,9,2,8,1,0,18,8,8,3,0,0,0,1);
	second.setRotateZ(pi / 6);
	Mat4 multi = Mat4(Mat3Test*second);
	Vector4 tester = Vector4(second*v);
	system("pause");
	return 0;
}
