#include<iostream>
#include"VectorClass.h"
float pi = atan(1) * 4;

int main()
{
	Vector * A = new Vector(3,4);
	Vector B = Vector(6, 8);
	A->Add(B);
	std::cout << cos(pi / 2);
	system("pause");
	return 0;
}