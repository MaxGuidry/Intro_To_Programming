#include<iostream>
#include"VecMatrix.h"
#include<string>
#include<time.h>
#include<Windows.h>
#include<cassert>

int main()
{
	float b[2][2] = { 1,2,3,4 };
	Vector3 v = Vector3(1, 2,3);
	Mat2 a = Mat2(b);
	Mat2 k = Mat2(1, 2, 3, 4);
	Mat2 test = Mat2(a*k);
	//Vector2 z = Vector2(a*v);
	Mat3 bitches = Mat3(1, 2, 3, 4, 5, 6, 7, 8, 9);
	Mat3 second = Mat3(1, 2, 3, 4, 5, 6, 7, 8, 9);
	Mat3 multi = Mat3(bitches*second);
	Vector3 tit = Vector3(bitches*v);
	system("pause");
	return 0;
}