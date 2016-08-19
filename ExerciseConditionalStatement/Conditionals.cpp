#include<iostream>  //3 and 5 skipped
#include<time.h>
void exercise1();
void exercise2();
void exercise3();
void exercise4();
void exercise5();
void exercise6();
void exercise7();
void exerciserand();


int main()
{
	exercise3();
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

//
//void exercise3()
//{
//	int a, b, c, d, e;
//	std::cin >> a >> b >> c >> d >> e;
//	int sum = a + b + c + d + e;
//	int arrayofstuff[5] = { a,b,c,d,e };
//	int thisthinghere = 0;
//	if (sum > 0)
//	{
//		for (; thisthinghere < 5; thisthinghere++)
//		{
//			arrayofstuff[thisthinghere];
//
//
//
//		}
//	}
//	
//	else if (sum < 0)
//	{
//
//	}
//	else
//	{
//		std::cout << a << b << c << d << e;
//	}
//}







void exercise3()
{

	int allthemdigits[3];
	std::cin >> allthemdigits[0] >> allthemdigits[1] >> allthemdigits[2];
	int sum = allthemdigits[0] + allthemdigits[1] + allthemdigits[2];
	if (sum > 0)
	{
		for (int i = 2; i >= 0; i--)
		{
			for (int j = 2; j > 0; j--)
			{
				if (allthemdigits[j] < allthemdigits[j - 1])
				{
					int temppos;
					temppos = allthemdigits[j];
					allthemdigits[j] = allthemdigits[j - 1];
					allthemdigits[j - 1] = temppos;

				}
			}

		}
	}


	else if (sum < 0)
	{
		for (int i = 2; i >= 0; i--)
		{
			for (int j = 2; j > 0; j--)
			{
				if (allthemdigits[j] > allthemdigits[j - 1])
				{
					int tempneg;
					tempneg = allthemdigits[j];
					allthemdigits[j] = allthemdigits[j - 1];
					allthemdigits[j - 1] = tempneg;

				}
			}
		}
	}
	else
	{
		std::cout << allthemdigits[0] << std::endl << allthemdigits[1] << allthemdigits[2];
	}

	std::cout << allthemdigits[0] << allthemdigits[1] << allthemdigits[2] << std::endl;



 }

















void exercise4()
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

void exercise5()
{
	int x;
	int y;
	std::cin >> x;
	int evaluate = (x == 0) ? y = 0 : y = 10 / x;
	std::cout << y << std::endl;

}

void exercise6() 
{
	int firstone;
	int secondone;
	float equal;
	char something;
	std::cin >> firstone >> something >> secondone;
	switch ((int)something)
	{
	case 43: 
		equal = (float)firstone + (float)secondone;
		std::cout << equal << std::endl;
		break;
	case 45:
		equal = (float)firstone - (float)secondone;
		std::cout << equal << std::endl;
		break;
	case 47:
		equal = (float)firstone / (float)secondone;
		std::cout << equal << std::endl;
		break;
	case 42: 
		equal = (float)firstone * (float)secondone;
		std::cout << equal << std::endl;
		break;
	case 37:
		equal = firstone % secondone;
		std::cout << equal << std::endl;
		break;
	default:
		std::cout << "Invalid character input";
	}
	return;
}

void exercise7()
{
	int month;
	std::cout << "Please enter the number of the month you want";
	std::cout << std::endl << "ex. : January-1" << std::endl << "December-12";
	std::cout << std::endl;
	do{
		std::cin >> month;
		switch (month)
		{
		case 1:
			std::cout << "January has 31 days." << std::endl;
			break;
		case 2:
			std::cout << "February has 28 days." << std::endl;
			break;
		case 3:
			std::cout << "March has 31 days." << std::endl;
			break;
		case 4:
			std::cout << "April has 30 days." << std::endl;
			break;
		case 5:
			std::cout << "May has 31 days." << std::endl;
			break;
		case 6:
			std::cout << "June has 30 days." << std::endl;
			break;
		case 7:
			std::cout << "July has 31 days." << std::endl;
			break;
		case 8:
			std::cout << "August has 31 days." << std::endl;
			break;
		case 9:
			std::cout << "September has 30 days." << std::endl;
			break;
		case 10:
			std::cout << "October has 31 days." << std::endl;
			break;
		case 11:
			std::cout << "November has 30 days." << std::endl;
			break;
		case 12:
			std::cout << "December has 31 days." << std::endl;
			break;
		default:
			std::cout << "Error: invalid month number. Please try again." << std::endl;

		}
	} while (month < 1 || month>12);
}

void exerciserand()
{
	int randomnum;
	randomnum = rand() % 10 + 1;
	switch (randomnum)
	{
	case 1:
		std::cout << "Jan";
		break;
	case 2:
		std::cout << "Feb";
		break;
	case 3:
		std::cout << "Mar";
		break;
	case 4:
		std::cout << "Apr";
		break;
	case 5:
		std::cout << "May";
		break;
	case 6:
		std::cout << "Jun";
		break;
	case 7:
		std::cout << "Jul";
		break;
	case 8:
		std::cout << "Aug";
		break;
	case 9:
		std::cout << "Sep";
		break;
	case 10:
		std::cout << "oct";
		break;

	}


}


/* number 8
a.true
b.false
c.0
d.true
e.true
f.false
g.true
h.true
i.true
j.true

*/


/* number 9
a.false
b.true
c.true
d.true
e.true

*/