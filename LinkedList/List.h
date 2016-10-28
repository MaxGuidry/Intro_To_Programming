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
			first->info=node;
			first->link = nullptr;
			last->info = node;
			last->link = nullptr;
			count++;
		}
		else
		{
			const Type * temp = &node;
			last = temp;
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