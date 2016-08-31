#include<iostream>
void Variables();



int main()
{
	Variables();
	system("pause");
	return 0;
}

void Variables()
{
	int a = 2 / 3 + 3 / 5;
	int b = 2 % 3 + 3 % 5;
	int c = 23 % 15 % -2;
	int d = 25 * 1 / 2;
	int e = 25 * 1.0 / 2;
	int f = 25 * (1 / 2);
	int g = 235 / 8 + 7;
	int h = 235 / 8.0 + 7;
	int i = ((20 + 1) / 2 - 2.0) / (23 + 3)*0.2;
	std::cout << a << b << c << d << e << f << g << h << i;
}