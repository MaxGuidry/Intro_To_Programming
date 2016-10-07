#pragma once
#include<string>
class Stack 
{
public:
	Stack(int);
	void pop();
	char top();
	void push(char);
	void initializeStack(std::string);
	bool isFullStack();
	bool isEmpty();
private:
	int m_MaxSize;
	int m_topIndex;
	std::string m_data;
};