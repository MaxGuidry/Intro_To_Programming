#include<iostream>
#include<Windows.h>
#include<string>
#include"Stack.h"
#include<math.h>
int convertToInt(char);
char convertToChar(int);
void calculateNumber(Stack&);
int main()
{

	Stack mathStack = Stack::Stack(3);
	std::cout << "Enter equation in reverse polish notation.\n";
	std::string equation;
	std::getline(std::cin, equation);
	for (int i = 0; i < equation.length(); i++)
	{
		mathStack.push(equation[i]);
		int dis = convertToInt(mathStack.top());
		if (mathStack.top() == '+' || mathStack.top() == '-' || mathStack.top() == '*' || mathStack.top() == '/' || mathStack.top() == '%')
		{
			calculateNumber(mathStack);
		}


	}
	mathStack.printStack();
	std::cout << "math solved.\n";
	system("pause");
	return 0;
}

int convertToInt(char thing)
{
	thing -= 48;
	return thing;
}
char convertToChar(int thing)
{
	thing += 48;
	return thing;
}


void calculateNumber(Stack &numbers)
{
	int stored;
	int counter = 0;
	int answer = 0;
	int actualNum;
	char operation = numbers.top();
	numbers.pop();
	while (numbers.isEmpty() == false)
	{
		if (numbers.top() == ' ')
		{
			numbers.pop();
			actualNum = 0;
			int place = 1;
			while (numbers.top() != ' '&&numbers.isEmpty() == false)
			{
				int temporary = convertToInt(numbers.top())*place;
				actualNum += temporary;
				place *= 10;
				numbers.pop();
			}
			if (counter == 0)
				stored = actualNum;
			counter++;
		}
	}
	if (operation == '+')
	{
		answer = stored + actualNum;
	}
	if (operation == '-')
	{
		answer = actualNum - stored;
	}
	if (operation == '*')
	{
		answer = actualNum*stored;
	}
	if (operation == '/')
	{
		answer = actualNum / stored;
	}
	if (operation == '%')
	{
		answer = actualNum % stored;
	}
		int digits = 1;
	for (int i = 1;; i *= 10)
	{
		if (answer / i < 10 && answer / i >= 1)
		{
			break;
		}
		digits++;
	}
	Stack temp = Stack(digits);
	int numOfTimes = 0;
	while (temp.isFullStack() == false)
	{
		int tempAnswer = answer;
		int i;
		for (i = pow(10, digits - 1); i > pow(10, numOfTimes); i /= 10)
		{
			tempAnswer %= i;
		}
		if (tempAnswer != 0)
			tempAnswer /= (i);
		temp.push(convertToChar(tempAnswer));
		numOfTimes++;
	}
	while (temp.isEmpty() == false)
	{
		numbers.push(temp.top());
		temp.pop();
	}
}