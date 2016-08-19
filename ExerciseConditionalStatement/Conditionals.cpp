#include<iostream>  //3 and 5 skipped
void exercise1();
void exercise2();
void exercise3();
void exercise4();

int main()
{
	
	system("pause");
	return 0;
}

void exercise1()
{
	int x;
	int y = 0;
	if (y == 0)
	{
		x = 100;
	}
	std::cout << x << std::endl;
	return;
}

void exercise2()
{
	int first;
	int second;
	std::cin >> first >> second;
	if (first > second)
	{
		std::cout << std::endl << first;
	}
	else if (second > first)
	{
		std::cout << std::endl << second;
	}
	else
	{
		std::cout << "Invalid input.";
	}

	return;
}

//void exercise3()
//{
//	int a;
//	int b;
//	int c;
//	int d;
//	int e;
//	int sum;
//	std::cin >> a >> b >> c >> d >> e;
//	sum = a + b + c + d + e;
//	if (sum > 0)
//	{
//		std::cout 
//	}
//}

void excercise4()
{
	int choice;
	switch (choice)
	{
	case 1: 
		std::cout << "1";
		break;
	case 2: 
		std::cout << "2 or 3";
		break;
	case 3:
		std::cout << "2 or 3";
		break;
	case 4:
		std::cout << "4";
		break;
	default:
		std::cout << "Invalid";

	}
}

void exercise6() // this is how you do it Max this is not complete
{
	int firstone;
	int secondone;
	int equal;
	char something;
	std::cin >> firstone >> something >> secondone;
	switch ((int)something)
	{
	case 43:
		equal = firstone + secondone;
		std::cout << equal << std::endl;
	}
}