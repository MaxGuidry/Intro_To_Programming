#include<iostream>
#include<string>
#include<time.h>
#include<windows.h>
#include<string>

float smallerNumber(float, float);
float numberInput();
int coinToss();
int sumOfN(int);
int userInput();
int SumArray(int[], int);
int MinInArray(int[], int);
int MultiplyByIndex(int[], int[], int);
int threeArrays(int[], int[], int[], int);
int runningSum(int[], int);
int searchingArray(int[], int, int);
int copyingArrays(int[], int[], int[], int);
int powerFunction();
int lookAndSay(int[], int);
void rockPaperScissors(int, int);
int getUserGuess();
int getComputerGuess();

int main()
{
	rockPaperScissors(getComputerGuess(), getUserGuess());
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
		Sleep(300);
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
		output_array[i] = integer_array[i] * i;
		std::cout << output_array[i] << std::endl;
	}
	return 0;
}

/*
11. Write a function that takes as its parameters two input arrays of integers , an integer for
their size and an output array. Set the value at each index to the sum of the corresponding
two elements of the input arrays at the same index. Assume the three arrays are of equal
length. Write your own code for testing this function.*/

int threeArrays(int firstArray[], int secondArray[], int thirdArray[], int a)
{
	for (int i = 0; i < a; i++)
	{
		thirdArray[i] = firstArray[i] + secondArray[i];
		std::cout << thirdArray[i] << std::endl;
	}
	return 0;
}

/*
12. Write a function that takes as its parameters an array called array_input of integers and the
size of the array and modifies the given array so that it contains a running sum of its
original values. For example, if the array originally had the values {3,2,4,7}, after running
your function that array would instead contain {3,5,9,16}, and if you ran it another time
passing the modified array in again, you'd have {3,8,17,33}. Write your own code for testing
this function.
*/

int runningSum(int arrayone[], int a)
{
	for (int x = 0; x < 2; x++)
	{
		for (int i = 0; i < a; i++)
		{
			int sum = 0;
			sum = arrayone[i] + arrayone[i + 1];
			arrayone[i + 1] = sum;
			std::cout << arrayone[i] << std::endl;
		}
	}
	return 0;
}

/*
13. Write a function that searches for a particular number in an array.The function should
have three parameters : the array, the array size, and the number to be found.If the
number is in the array, the function should return the position of the number in the array.
If the number isn’t found, the function should return -1. In the case that the desired
number appears more than once in the array, the function should return the position of
the first occurrence.Write your own code to test this function.
*/

int searchingArray(int arrayone[], int a, int b)
{
	for (int i = 0; i < a; i++)
	{
		if (arrayone[i] == b)
		{
			return i;
		}

	}
	return -1;
}

/*
14. Write a function named Split that accepts one input array of integers, an integer for the
size of the input array, and two output arrays. All numbers in the input array that are
positive are copied into the first output array and all numbers in the input array that are
negative are copied into the second output array. The function should return how many
numbers were copied into the first output array. Write your own code to test this function.
*/

int copyingArrays(int inputArrayOne[], int outputArrayOne[], int outputArrayTwo[], int a)
{
	for (int i = 0; i < a; i++)
	{
		if (inputArrayOne[i] > 0)
		{
			outputArrayOne[i] = inputArrayOne[i];
		}
		else
		{
			outputArrayTwo[i] = inputArrayOne[i];
		}
	}
	return 3;
}


/*
15. Write a function that calculates and then returns x to the power of y.
*/

int powerFunction()
{
	int x = 2;
	int answer = x;
	int y = 3;
	for (int i = 1; i < y; i++)
	{
		answer = answer*x;
	}
	std::cout << answer << std::endl;
	return answer;
}

/*
16. Write a function that takes in an array of integers, and the size of the array. The function
should print out the “look and say” sequence for the array. The look and say sequence
works by printing out how many of the same number there are in a row followed by that
number.
For example, if the array was {1, 1, 1, 1} the function would print out “4, 1” because there
are four ones.
If the array was {1, 2, 2, 2, 3, 4} the function would print out “1,1,3,2,1,3,1,4” because there
is “one 1, three 2s, one 3, one 4”.
If the array is {1,2,2,1,5,1,1,7,7,7,7,1,1,1,1,1,1,1,1} the function should print out
“1,1,2,2,1,1,1,5,2,1,4,7,8,1”
Write your own code to test the function.
*/

int lookAndSay(int arrayOfNumbers[], int size)
{
	int x = 1;
	for (int i = 0; i < size; i++)
	{
		int x = 1;
		while (arrayOfNumbers[i] == arrayOfNumbers[i + 1])
		{
			i++;
			x++;
		}
		std::cout << x << "," << arrayOfNumbers[i] << std::endl;
	}
	return 0;
}

/*
17. Write a program that lets the user play the game of Rock, Paper, Scissors against the
computer. The program should work as follows:
1. When the program begins, a random number in the range of 1 - 3 is generated. If
the number is 1, then the computer has chosen rock. If the number is 2, then the
computer has chosen paper. So if the number is 3 then the computer has chosen
scissors.
2. The user enters their choice of “rock”, “paper” or “scissors”
3. The computer’s choice is displayed.
4. A winner is selected according to the following rules:
1. Rock beats scissors, scissors beats paper, paper beats rock
2. If there is a tie then the game must be replayed
5. Make sure to break the game up into functions to perform each task. Make sure to
look for any code that is repeated, and break it out into a function.
*/



//rock paper scissors using strings
/*
void rockPaperScissors()
{
	srand(time(NULL));
	do
	{
		std::cout << "Enter rock, paper, or scissors" << std::endl;
		std::string userChoice;
		std::cin >> userChoice;
		int computerChoiceNum;
		computerChoiceNum = rand() % 3 + 1;
		std::string computerChoiceString;
		switch (computerChoiceNum)
		{
		case 1:
		{
			computerChoiceString = "rock";
				break;
		}
		case 2:
		{
			computerChoiceString = "paper";
			break;
		}
		case 3:
		{
			computerChoiceString = "scissors";
			break;
		}
		for (int check = 0; check < 8; check++)
		{

		}
		}

	}
}
*/



void rockPaperScissors(int computerChoice, int userChoice)
{
	while (userChoice == computerChoice || userChoice > 3 || userChoice < 1)
	{
		std::cout << "You Tied try again" << std::endl;
		std::cin >> userChoice;
		computerChoice = rand() % 3 + 1;
		std::cout << "Computer chose: " << computerChoice << std::endl;;
	}

	switch (userChoice)
	{
		case 1:
		{
			switch (computerChoice)
			{
				case 2:
				{
					std::cout << "You Lose" << std::endl;
					break;
				}
				case 3:
				{
					std::cout << "You Win" << std::endl;
					break;
				}
			}
			break;
		}
		case 2:
		{
			switch (computerChoice)
			{
				case 1:
				{
					std::cout << "You Win" << std::endl;
					break;
				}
				case 3:
				{
					std::cout << "You Lose" << std::endl;
					break;
				}
			}
			break;
		}
		case 3:
		{
			switch (computerChoice)
			{
				case 2:
				{
					std::cout << "You Win" << std::endl;
					break;
				}
				case 1:
				{
					std::cout << "You Lose" << std::endl;
					break;
				}
			}
			break;
		}
	}



	/*
	if (userChoice == computerChoice)
	{
		std::cout << "You tied try again" << std::endl;
	}
	else if (userChoice == 1 && computerChoice == 2)
	{
		std::cout << "You Lose" << std::endl;
	}
	else if (userChoice == 1 && computerChoice == 3)
	{
		std::cout << "You Win" << std::endl;
	}
	else if (userChoice == 2 && computerChoice == 1)
	{
		std::cout << "You Win" << std::endl;
	}
	else if (userChoice == 2 && computerChoice == 3)
	{
		std::cout << "You lose" << std::endl;
	}
	else if (userChoice == 3 && computerChoice == 1)
	]
	{
		std::cout << "You win" << std::endl;
	}
	else if (userChoice == 3 && computerChoice == 2)
	{
		std::cout << "You lose" << std::endl;
	}
	*/
}

int getUserGuess()
{
	int userChoice;
	std::cout << "1-Rock" << std::endl << "2-Paper" << std::endl << "3-Scissors" << std::endl;
	std::cin >> userChoice;
	return userChoice;
}
int getComputerGuess()
{
	srand(time(NULL));
	int computerChoice;
	computerChoice = rand() % 3 + 1;
	std::cout << "Computer chose: " << computerChoice << std::endl;
	return computerChoice;
}