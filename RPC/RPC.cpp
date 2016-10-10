#include<iostream>
#include<string>
#include"Stack.h"

int main()
{

	Stack mathStack = Stack::Stack(3);
	std::cout << "Enter equation in reverse polish notation.\n";
	std::string equation;
	std::getline(std::cin, equation);
	mathStack.initializeStack(equation);

	system("pause");
	return 0;
}
