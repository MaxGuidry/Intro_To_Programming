#include<iostream>
void swap(char &,char &);

int main()
{
	char first = 'a';
	char second = 'b';
	swap(first, second);
	system("pause");
	return 0;
}

void swap(char &a, char &b)
{
	a = a + b;
	b = a - b;
	a = a - b;
}