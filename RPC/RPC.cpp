#include<iostream>
#include<Windows.h>
#include<string>
#include"Stack.h"
int convertToInt(char);

int main()
{

	Stack mathStack = Stack::Stack(3);
	std::cout << "Enter equation in reverse polish notation.\n";
	std::string equation;
	std::getline(std::cin, equation);
	for (int i = 0; i < 3; i++)//TODO make program work when numbers larger than 9 are entered------use spaces as seperation for numbers and-------to use large numbers-||if 14 is entered program will take 1*10 + 4 and use 14 to calculate the rest of the number then do reverse to seperate them|
	{
		mathStack.push(equation[i]);
		if (mathStack.top() == '+')
		{
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

}


int calculateLargeNumber(Stack number)
{

}