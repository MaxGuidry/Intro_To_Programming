#include<iostream>

int main()
{
	int number = 5;
	{
		int x = 10;
		number = x;
	}

	std::cout << number << std::endl;
	system("pause");
	return 0;
}