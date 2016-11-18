#include<iostream>
int mult(int, int);
int main()
{
	mult(4, 10);
	system("pause");
	return 0;
}

int mult(int a, int b)
{
	int temp = 0;
	for (int i = 0; i < b; i++)
	{
		temp += a;
	}
	return temp;
}