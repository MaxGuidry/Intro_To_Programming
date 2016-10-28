#pragma once
template<typename Type>
struct nodeType;

template<typename Type>
class LinkedList
{
public:
	bool Add(const Type& node)
	{
		if (count == 0)
		{
			first->info = node;
			first->link = nullptr;
			last->info = node;
			last->link = nullptr;
			count++;
		}
		else
		{
			nodeType<Type> *newNode = new nodeType<Type>;
			last->link = newNode;
			last = newNode;
			if (count == 1)
				first->link = newNode;
			last->info = node;
			last->link = nullptr;
			count++;
		}
		return true;
	}
	LinkedList()
	{
		first = new nodeType<Type>;
		last = new nodeType<Type>;
		count = 0;
	}
	const Type front()
	{

	}
	const int length()
	{

	}
	void print()

	{
		//WRONG BUT WORKS
		nodeType<Type> * temp = new nodeType<Type>;
		int counter = 0;
		for (; temp != NULL; counter++)
		{
			if (counter == 0)
			{
				temp = first;
			}
			else
			{
				temp = temp->link;
			}
			if (temp != nullptr)
				std::cout << temp->info;
		}
	}
protected:
	int count;
	nodeType<Type> *first;
	nodeType<Type> * last;
};
template<typename Type>
struct nodeType
{
public:
	Type info;
	nodeType<Type> * link;
};