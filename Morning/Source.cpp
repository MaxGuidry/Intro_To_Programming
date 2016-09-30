#include<iostream>

int mostOften(int *,int);

int main()
{
	int nums[10] = { 1,2,3,3,2,4,5,2,7,2 };
	mostOften(nums, 10);
	system("pause");
	return 0;
}

int mostOften(int * array, int size)
{
	int mostNum;
	int mosttimes = 0;
	for (int i = 0; i < size; i++)
	{
		int numtimes=0;
		for (int j = 0; j < size; j++)
		{
			if (array[i] == array[j])
			{
				numtimes++;
				if (numtimes > mosttimes)
				{
					mostNum = array[j];
					mosttimes = numtimes;
				}
			}
		}
	}
	return mostNum;
}