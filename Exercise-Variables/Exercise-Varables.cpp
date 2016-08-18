#include<iostream>
void number1();
void number4();
void number5();
void number6();
void number7();

int main()
{ 
	int sectionnum;
	std::cout << "Enter the number of the section you would like to go to." << std::endl;
	std::cin >> sectionnum;
	switch (sectionnum)
	{
	case 1: {
		number1();
		break;
	}

	case 4: 
	{
		number4();
		break;
	}
	case 5: 
	{
		number5();
		break;
	}
	case 6:
	{
		number6();
		break;
	}
	case 7: 
	{
		number7();
		break;
	}
	default:
	{
		std::cout << "Improper input.";
	}
	}
	
	system("pause");
	return 0;
}

void number1()
{
	float a = 2.0f / 3.0f + 3.0f / 5.0f;
	int b = 2 % 3 + 3 % 5;
	float c = 23 % 15 % -2;
	float d = 25.0f*1.0f / 2.0f;
	float e = 25.0f*1.0f / 2.0f;
	float f = 25.0f*(1.0f / 2.0f);
	float g = 235.0f / 8.0f + 7.0f;
	float h = 235.0f / 8.0f + 7.0f;
	float i = ((20.0f + 1.0f) / 2.0f - 2.0f) / (23.0f + 3.0f)*0.2f;


	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;
	std::cout << e << std::endl;
	std::cout << f << std::endl;
	std::cout << g << std::endl;
	std::cout << h << std::endl;
	std::cout << i << std::endl;
	

	
	/*
	a. 19/15 or 1.2666
	b.5
	c.0
	d.12.5

	e.12.5
	f.12.5
	g.36.375
	h.36.375
	i.0.0653846
	*/
	return;
}

/*number 2
a. avgHeight
b. taxRateOver65k
c. taxRateBelow5k
d. totalGameCosts
*/

/*number 3
a. int
b. float
c. char
d. int
e. bool
*/

void number4()
{
	int first;
	int second;
	int placeholder;
	std::cout << "enter an interger for first number then second number" << std::endl;
	std::cin >> first;
	std::cin >> second;
	std::cout << "first:" << first << std::endl << "second:" << second << std::endl;
	placeholder = first;
	first = second;
	second = placeholder;
	std::cout << "I switched them here:" << std::endl << "first:" << first;
	std::cout << std::endl << "second:" << second << std::endl;
	return;
}


void number5()
{
	int i = 0;
	float f = 0;
	char ch = 'a';
	std::cin >> i >> ch >> f;
	std::cout << "i: " << i << "\nch: " << ch << "\nf: " << f << std::endl;
	return;
}


/* number 5
a. 1 A 45
b. 1 A 45
c. 1 9 45
d. 1 9 45
e. 
f.
*/

void number6()
{
	int first;
	int second;
	int third;
	int fourth;
	int fifth;
	float avg;
	std::cout << " please enter 5 numbers:" << std::endl;
	std::cin >> first >> second >> third >> fourth >> fifth;
	avg = (first + second + third + fourth + fifth) / 5.0f;
	std::cout << avg << std::endl;
	return;
}

void number7()
{
	std::cout << "Enter any two characters." << std::endl;
	char angel;
	char devil;
	std::cin >> angel >> devil;
	char newthing;
	newthing = ((int)angel + (int)devil) /2;
	std::cout << newthing << std::endl;

	return;
}