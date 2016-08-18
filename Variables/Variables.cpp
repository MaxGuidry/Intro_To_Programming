#include<iostream>
#include<math.h> //imports sqrt and pow 
int mathOperations();

int main()
{
	mathOperations();
	system("pause");
	return 0;
}



int mathOperations()
{
	int add = 5 + 5;
	int subtract = 12 - 6;
	int multiply = 2 * 20;
	int divide = 500 / 5;
	int power = pow(3, 2);
	int squareRoot = sqrt(25);

	std::cout << add << std::endl;
	std::cout << subtract << std::endl;
	std::cout << multiply << std::endl;
	std::cout << divide << std::endl;
	std::cout << power << std::endl;
	std::cout << squareRoot << std::endl;
	return 0;
}
