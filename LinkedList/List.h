#pragma once
#include<cassert>
template<typename Type>
struct nodeType;

template<typename Type>
class LinkedListIterator;

template<typename Type>
class LinkedList
{
public:
	void initializeList()
	{

	}
	void insertBack(const Type& node)
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
	}
	void insertFirst(const Type & node)
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
			newNode->link = first->link;
			first = newNode;
			first->info = node;
			count++;
		}
	}
	LinkedList()
	{
		first = new nodeType<Type>;
		last = new nodeType<Type>;
		count = 0;
	}
	Type front() const
	{
		assert(count != 0);
		return first->info;
	}
	Type back() const
	{
		assert(count != 0);
		return last->info;
	}
	LinkedListIterator<Type> begin()
	{
		return LinkedListIterator<Type>(first);
	}
	LinkedListIterator<Type> end()
	{
		return LinkedListIterator<Type>(last->link);
	}

	const int length()
	{
		return count;
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
template<typename Type>
class LinkedListIterator
{
private:
	nodeType<Type> * current;
public:
	LinkedListIterator() {}
	LinkedListIterator(nodeType<Type> *a) :current(a) {}
	Type operator*	()
	{
		return current->info;
	}
	LinkedListIterator<Type> operator++()
	{
		current = current->link;
		return *this;
	}
	bool operator==(const LinkedListIterator<Type>& a)
	{
		return (current == a.current) ? true : false;
	}
	bool operator!=(const LinkedListIterator<Type>& a)
	{

		return (current != a.current) ? true : false;
	}
};