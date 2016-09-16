#include<iostream>

void PointersFunction(int*, int);

int main()
{
	int nums[50];
	int size = 50;
	PointersFunction(nums, size);
	system("pause");
	return 0;
}

void PointersFunction(int *array, int size)
{
	int index = 0;
	for (int i = 2; i <= 2*size; i+=2)
	{
			*(array +index) = i;
			index++;
	}
}