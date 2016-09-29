#include<iostream>

int twoLargest(int *, int);

int main()
{
	int nums[10] = { 3,4,5,200,4,200,6,0,3,2 };
	std::cout << twoLargest(nums, 10) << std::endl;
	system("pause");
	return 0;
}

int twoLargest(int * array, int size)
{
	int largest =array[0];
	int second;
	if (largest > array[1])
	{
		second = array[1];
	}
	for (int i = 1; i < size; i++)
	{
		if (array[i] > largest)
		{
			second = largest;
			largest = array[i];
		}
		else if (array[i] > second)
		{
			second = array[i];
		}
	}
	return largest + second;
}
