#include<iostream>
int sum(int*, int);

int main()
{
	int nums[5] = { 1,4,6,5,2 };
	int thing = sum(nums, 5);
	system("pause");
	return 0;
}
int sum(int * array, int size)
{
	int largest = array[0];
	int second;
	for (int i = 1; i < size; i++)
	{
		if (array[i] == largest)
		{
			second = array[i];
		}
		else if (array[i] > largest)
		{
			second = largest;
			largest = array[i];
		}
		if (array[i] > second&&array[i] != largest)
		{
			second = array[i];
		}
	}
	return second + largest;
}