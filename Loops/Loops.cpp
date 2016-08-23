#include<iostream>
void exercise1();
void exercise2();
void exercise3();
void exercise4part1();
void exercise4part2();
void exercise4part3();


int main()
{
	std::cout << "For exercise 1 enter:1" << std::endl << "For exercise 2 enter:2" << std::endl << "For exercise 3 enter:3" << std::endl;
	std::cout << "For exercise 4 part 1 enter:4" << std::endl << "For exercise 4 part 2 enter:5" << std::endl << "For exercise 4 part 3 enter:6" << std::endl;
	int choice;
	do
	{
		std::cin >> choice;
		switch (choice)
		{
		case 1:
		{
			exercise1();
			break;
		}
		case 2:
		{
			exercise2();
			break; 
		}
		case 3:
		{
			exercise3();
			break;
		}
		case 4:
		{
			exercise4part1();
			break;
		}
		case 5:
		{
			exercise4part2();
			break;
		}
		case 6:
		{
			exercise4part3();
			break;
		}
		default:
		{
			std::cout << "invalid input try again" << std::endl;
		}
		}
	} while (choice > 6 || choice < 1);
	system("pause");
	return 0;
}


void exercise1()
{
	std::cout << "for 100-0 input 1" << std::endl << "for 99-0 input 2" << std::endl;
	std::cout << "for 100-1 input 3" << std::endl << "for 100-0 in decrements of 2 input 4" << std::endl;
	int choice;
	do
	{
		std::cin >> choice;
		switch (choice)
		{
		case 1:
			for (int i = 100; i >= 0; i--)
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
	int i;
	int sum = 0;
	for (i = 1; i < 1000; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;
			std::cout << i << "   " << sum << std::endl;
		}
	}
	std::cout << sum << std::endl;
}


void exercise4part1()
{
	int choice;
	std::cout << "for 100-0 input 1" << std::endl << "for 99-0 input 2" << std::endl;
	std::cout << "for 100-1 input 3" << std::endl << "for 100-0 in decrements of 2 input 4" << std::endl;
	
	do
	{
		std::cin >> choice;
		std::cout << std::endl;
		switch (choice)
		{
		case 1:
		{
			int i = 100;
			while (i >= 0)
			{
				std::cout << i << std::endl;
				i--;
			}
			break;
		}
		case 2:
		{
			int i = 99;
			while (i >= 0)
			{
				std::cout << i << std::endl;
				i--;
			}
			break;
		}
		case 3:
		{
			int i = 100;
			while (i > 0)
			{
				std::cout << i << std::endl;
				i--;
			}
			break;
		}
		case 4:
		{
			int i = 100;
			while (i >= 0)
			{
				std::cout << i << std::endl;
				i -= 2;
			}
			break;
		}
		default:
			std::cout << "Invalid input" << std::endl;
		}
	} while (choice > 5 || choice < 1);
}


void exercise4part2()
{
	int i = 0;
	while(i <= 100)
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
		i++;
	}
}

void exercise4part3()
{
	int i = 0;
	int sum = 0;
	while(i < 1000)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;
			std::cout << i << "   " << sum << std::endl;
		}
		i++;
	}
	std::cout << sum << std::endl;	
}