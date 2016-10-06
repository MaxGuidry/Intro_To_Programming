#include<iostream>
void swap(int &, int &);

int main()
{
	int first = 10;
	int second = 999;
	swap(first, second);
	system("pause");
	return 0;
}

void swap(int &a, int &b)
{
	a = a + b;
	b = a - b;
	a = a - b;
}