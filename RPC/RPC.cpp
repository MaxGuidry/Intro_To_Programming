#include<iostream>
#include<string>
#include"Stack.h"

int main()
{
	std::string stuff;
	std::getline(std::cin , stuff);
	Stack test;
	test.initializeStack(stuff);
	test.push('z');
	test.pop();
	system("pause");
	return 0;
}
