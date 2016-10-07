#include "Stack.h"

void stack::pop()
{
	m_data[m_topIndex] = '\0';
	m_topIndex = m_data.length() - 1;
}

char stack::top()
{
	return m_data[m_topIndex];
}

void stack::push(char stuff)
{
	m_data[m_topIndex + 1] = stuff;
	m_topIndex = m_data.length();
}

void stack::initializeStack(std::string stuff)
{
	m_data = stuff;
	m_topIndex = m_data.length() - 1;
}

bool stack::isFullStack()
{

	return false;
}

bool stack::isEmpty()
{
	if (m_topIndex == -1)
	{
		return true;
	}
	else
		return false;
}
