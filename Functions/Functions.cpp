#include<iostream>
#include<string>
#include<time.h>
#include<windows.h>
float smallerNumber(float, float);
float numberInput();
int coinToss();
int sumOfN(int);
int userInput();
int SumArray(int[], int);
int MinInArray(int[], int);
int MultiplyByIndex(int[], int[], int);

int main()
{
	coinToss();


	system("pause");
	return 0;
}



/*
1 1 2 2 3 3 3

*/

float numberInput()
{
	float first = 0;
	std::cout << "Enter a value: ";
	std::cin >> first;
	return first;
}

float smallerNumber(float first, float second)
{

	float smallerNum;
	float third;

	if (first < second)
		return first;
	return second;

	if (first < second)
	{
		std::cout << "The smaller number is: " << first << std::endl;
		smallerNum = first;
	}
	else
	{
		std::cout << "The smaller number is: " << second << std::endl;
		smallerNum = second;
	}
	return smallerNum;
}


int coinToss()
{
	srand(time(NULL));
	int num = rand();
	int randNum;
	int numberOfThrows;
	std::cout << "How many times would you like to flip the coin?" << std::endl;
	std::cin >> numberOfThrows;
	for (int i = 0; i < numberOfThrows; i++)
	{
		Sleep(3000);
		randNum = rand() % 2 + 1;
		switch (randNum)
		{
		case 1:
			std::cout << "Heads" << std::endl;
			break;
		case 2:
			std::cout << "Tails" << std::endl;
			break;
		}
	}
	return num;
}
/*
a. no return value
b. if n is not equal to 0 then there is no return
c.no return in main x is defined as an int in the function so the decimal is truncated
*/



/*
7. Write a function called SumTo that accepts an integer parameter N and returns the sum of
all integers from 1 to N, including N.
Use this code to test the function :
*/


int userInput()
{
	int input;
	std::cin >> input;
	return input;
}

int sumOfN(int n)
{
	int sum = 0;
	for (int i = 0; i <= n; i++)
	{
		sum = sum + i;
	}
	std::cout << sum << std::endl;
	return sum;
}


/*
8.  Write a function that takes as its parameters an array of integers and the size of the array
and returns the sum of the values in the array.
*/


int SumArray(int integer_array[], int a)
{
	int sum = 0;
	for (int x = 0; x < a; x++)
	{
		sum = sum + integer_array[x];
	}
	return sum;

}
	/*
	9.  Write a function that takes as its parameter an array of integers and the size of the array
	and returns the minimum of the values in the array.
	*/

int MinInArray(int integer_array[], int a)
{

	int smallest;
	smallest = integer_array[0];
	for (int x = 0; x < a; x++)
	{
		if (smallest > integer_array[x])
		{
			smallest = integer_array[x];
		}
	}
	return smallest;
}




/* 
10.  Write a function that takes as its parameter an array called input_array of integers, the
array size and a second array of the same size called output_array.Fill each element in the
second array to be the value in the same index of input_array multiplied by its index in the
array
*/


int MultiplyByIndex(int integer_array[], int output_array[], int a)
{
	for (int i = 0; i < a; i++)
	{
		output_array[i] = integer_array[i] *i;
		std::cout << output_array[i] << std::endl;
	}
	return 0;
}