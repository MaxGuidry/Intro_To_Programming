#include<iostream>
#include<cassert>
#include"VectorClass.h"
float pi = atan(1) * 4;

int main()
{
	Vector3<int> * Test = new Vector3<int>(3,2,9);
	Vector3<int> Thing = Vector3<int>(6,5,7);
	float dot=Test->DotProduct(Thing);
	assert(Test->Add(Thing) == Vector3<int>(9, 7, 16));
	system("pause");
	return 0;
}