#pragma once
#include<string>
class stack 
{
public:
	void pop();
	char top();
	void push(char);
	void initializeStack(std::string);
	bool isFullStack();
	bool isEmpty();
private:
	int m_topIndex;
	std::string m_data = new char;
};