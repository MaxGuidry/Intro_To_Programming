#include<iostream>
#include<string>
#include"Stack.h"

int main()
{

	Stack mathStack = Stack::Stack(3);
	std::cout << "Enter equation in reverse polish notation.\n";
	std::string equation;
	std::getline(std::cin, equation);
	//mathStack.initializeStack(equation);
	for (int i = 0; i < 3; i++)
	{
		mathStack.push(equation[i]);
		if (mathStack.top() == '+')
		{
			mathStack.pop();
			int temptop = mathStack.top();
			mathStack.pop();
			int ans = temptop + mathStack.top();
			mathStack.pop();
			mathStack.push(ans);
		}
	}
	std::cout << mathStack.top() <<"\n";
	system("pause");
	return 0;
}
