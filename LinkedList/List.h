#pragma once
#include<cassert>
template<typename Type>
struct NodeType;

template<typename Type>
class LinkedListIterator;

template<typename Type>
class LinkedListType
{
public:
	const LinkedListType<Type>& operator= (const LinkedListType<Type>& otherList)
	{
		copyList(otherList);
		return *this;
	}

	void initializeList()
	{
		first = new NodeType<Type>;
		last = new NodeType<Type>;
		count = 0;
	}
	bool isEmptyList() const
	{
		return (count == 0) ? true : false;
	}
	void print() const
	{
		NodeType<Type> * temp = new NodeType<Type>;
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
				std::cout << temp->info << ", ";
		}
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
			NodeType<Type> *newNode = new NodeType<Type>;
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
			NodeType<Type> *newNode = new NodeType<Type>;
			newNode->link = first;
			first = newNode;
			first->info = node;
			count++;
		}
	}
	LinkedListType()
	{
		first = new NodeType<Type>;
		last = new NodeType<Type>;
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
	bool search(const Type& nodeInfo)
	{
		LinkedListIterator<Type> temp = LinkedListIterator<Type>(begin());
		while (*temp != NULL)
		{
			if (*temp == nodeInfo)
				return true;
			++temp;
		}
		return false;
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
	void destroyList()
	{
		NodeType<Type> * temp = first;
		while (temp != NULL)
		{
			NodeType<Type> *tmp = temp;
			temp = temp->link;
			delete tmp;
		}
		first = NULL;
		last = NULL;
		count = 0;
	}
	void deleteNode(const Type& nodeInfo)
	{

		NodeType<Type>* node = first;
		if (node == nullptr)
			return;
		if (node->info == nodeInfo)
		{
			NodeType<Type> *tmp = node;
			node = node->link;
			delete tmp;
			count--;
			first = node;
		}
		else
		{
			while (node->link != NULL)
			{
				if (node->link->info == nodeInfo)
				{
					NodeType<Type>* tmp = node->link;
					node->link = node->link->link;
					delete tmp;
					count--;
					break;
				}
				node = node->link;
			}
		}
	}
	LinkedListType<Type>(const LinkedListType<Type>otherList)
	{
		copyList(otherList);
	}
	~LinkedListType<Type>()
	{
		destroyList();
	}
protected:
	int count;
	NodeType<Type> * first;
	NodeType<Type> * last;
private:
	void copyList(const LinkedListType<Type>&otherList)
	{
		first = otherList.first;
		last = otherList.last;
		count = otherList.count;
	}
};
template<typename Type>
struct NodeType
{
public:
	Type info;
	NodeType<Type> * link;
};
template<typename Type>
class LinkedListIterator
{
private:
	NodeType<Type> * current;
public:
	LinkedListIterator() {}
	LinkedListIterator(NodeType<Type> *a) :current(a) {}
	Type operator*	()
	{
		if (current == nullptr)
			return NULL;
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