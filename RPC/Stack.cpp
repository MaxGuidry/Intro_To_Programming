#include "Stack.h"
#include <iostream>

Stack::Stack(int size)
{
	m_MaxSize = size;
	m_topIndex = -1;
}

void Stack::pop()
{
	m_data.resize(m_data.length() - 1);
	m_topIndex--;
}

char Stack::top()
{
	if (m_topIndex == -1)
		return m_data[m_topIndex + 1];
	else
		return m_data[m_topIndex];
}

void Stack::push(char thing)
{
	m_data.append(&thing);
	m_topIndex++;
}

void Stack::initializeStack(std::string stuff)
{
	m_data = stuff;
	m_topIndex = m_data.length() - 1;
}

bool Stack::isFullStack()
{
	if (m_data.length() >= m_MaxSize)
	{
		return true;
	}
	else
		return false;
}

bool Stack::isEmpty()
{
	if (m_topIndex == -1)
	{
		return true;
	}
	else
		return false;
}

void Stack::printStack()
{
	std::cout << m_data << std::endl;
}
