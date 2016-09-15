#include<iostream>

float math(float first,float second,float third);

int main()
{
	float first, second, third;
	std::cin >> first >> second >> third;
	std::cout << math(first, second, third) << std::endl;
	system("pause");
	return 0;
}


float math(float first, float second, float third)
{
	return 5*(first + second + third);
}