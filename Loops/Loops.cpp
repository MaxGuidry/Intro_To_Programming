#include<iostream>
void exercise1();
void exercise2();
void exercise3();
void exercise4();



int main()
{
	exercise2();
	system("pause");
	return 0;
}


void exercise1()
{
	std::cout << "for 99-1 input 1" << std::endl << "for 99-0 input 2" << std::endl;
	std::cout << "for 100-1 input 3" << std::endl << "for 100-0 in decrements of 2 input 4" << std::endl;
	int choice;
	do
	{
		std::cin >> choice;
		switch (choice)
		{
		case 1:
			for (int i = 99; i > 0; i--)
			{
				std::cout << i << std::endl;
			}
			break;
		case 2:
			for (int i = 99; i >= 0; i--)
			{
				std::cout << i << std::endl;
			}
			break;
		case 3:
			for (int i = 100; i > 0; i--)
			{
				std::cout << i << std::endl;
			}
			break;
		case 4:
			for (int i = 100; i >= 0; i -= 2)
			{
				std::cout << i << std::endl;
			}
			break;
		default:
			std::cout << "Invalid input Please try again." << std::endl;

		}
	} while (choice < 1 || choice >4);


}

void exercise2()
{
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			std::cout << "FizzBuzz" << std::endl;
		}
		else if (i % 3 == 0)
		{
			std::cout << "Fizz" << std::endl;
		}
		else if (i % 5 == 0)
		{
			std::cout << "Buzz" << std::endl;
		}
		else
		{
			std::cout << i << std::endl;
		}
	}
}


void exercise3()
{

}