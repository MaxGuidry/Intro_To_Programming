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
	int digits = 3;
	int numOfTimes = 0;
	int answer = 630;
	for (int i = pow(10, digits-1); i > pow(10,numOfTimes); i /= 10)
	{
		answer %= i;
	}
	numOfTimes++;
	Stack mathStack = Stack::Stack(3);
	std::cout << "Enter equation in reverse polish notation.\n";
	std::string equation;
	std::getline(std::cin, equation);
	for (int i = 0; ; i++)//TODO make program work when numbers larger than 9 are entered------use spaces as seperation for numbers and-------to use large numbers-||if 14 is entered program will take 1*10 + 4 and use 14 to calculate the rest of the number then do reverse to seperate them|
	{
		mathStack.push(equation[i]);
		int dis = convertToInt(mathStack.top());
		if (mathStack.top() == '+')
		{
			mathStack.pop();
			mathStack.pop();
			char temptop = mathStack.top();
			mathStack.pop();
			char ans = temptop + mathStack.top() - 48;
			mathStack.pop();
			mathStack.push(ans);
		}
		else if (mathStack.top() == '-')
		{
			mathStack.pop();
			char temptop = mathStack.top();
			mathStack.pop();
			char ans = (mathStack.top()) - (temptop - 48);
			mathStack.pop();
			mathStack.push(ans);
		}
		else if (mathStack.top() == '*')
		{
			mathStack.pop();
			char temptop = mathStack.top();
			mathStack.pop();
			char ans = char((temptop - 48) * (mathStack.top() - 48) + 48);
			mathStack.pop();
			mathStack.push(ans);
		}
		else if (mathStack.top() == '/')
		{
			mathStack.pop();
			char temptop = mathStack.top();
			mathStack.pop();
			char ans = char((mathStack.top() - 48) / (temptop - 48) + 48);
			mathStack.pop();
			mathStack.push(ans);
		}
	}
	std::cout << mathStack.top() << "\n";
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
	int answer=0;
	while (numbers.isEmpty() == false)
	{
		char operation = numbers.top();
		numbers.pop();
		if (numbers.top() == ' ')
		{
			numbers.pop();
			int actualNum;
			int place = 1;
			while (numbers.top() != ' ')
			{
				int temporary = numbers.top()*place;
				actualNum += temporary;
				place *= 10;
				numbers.pop();
			}
			if (operation == '+')
			{
				answer += actualNum;
			}
		}
	}
	int digits=1;
	for (int i = 10;; i *= 10)
	{
		if (answer / i >= 10 || answer / i <= 1)
		{

			break;
		}
		digits++;
	}
	Stack temp = Stack(digits);
	int numOfTimes = 0;
	while (temp.isFullStack() == false)
	{
		
		for (int i = pow(10, digits); i < numOfTimes; i /= 10)
		{
			answer %= i;
		}
		numOfTimes++;
	}
}