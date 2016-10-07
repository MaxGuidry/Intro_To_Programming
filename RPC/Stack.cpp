#include "Stack.h"

Stack::Stack(int size)
{
	m_MaxSize = size;
}

void Stack::pop()
{
	m_data[m_topIndex] = '\0';
	m_topIndex = m_data.length() - 1;
}

char Stack::top()
{
	return m_data[m_topIndex];
}

void Stack::push(char stuff)
{
	m_data[m_topIndex + 1] = stuff;
	m_topIndex = m_data.length();
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