#include "Stack.h"

Stack::Stack(int size)
{
	m_MaxSize = size;
	m_topIndex = -1;
}

void Stack::pop()
{
	m_data[m_topIndex] = '\0';
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
	//m_data[m_topIndex + 1] = thing;
	//m_data[m_topIndex + 2] = '\0';
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