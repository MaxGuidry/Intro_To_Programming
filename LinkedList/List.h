#pragma once
#include<cassert>
template<typename Type>
struct nodeType;

template<typename Type>
class LinkedListIterator;

template<typename Type>
class linkedListType
{
public:
	const linkedListType<Type>& operator= (const linkedListType<Type>& otherList)
	{

		linkedListType<Type> * temp = new linkedListType<Type>;
		for (int i = 0; i < otherList.count; i++)
		{
			if (i == 0)
			{
				temp->first->info = node;
				temp->first->link = nullptr;
				temp->last->info = node;
				temp->last->link = nullptr;
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
			}
		}
		return
	}

		void initializeList()
		{
			first = new nodeType<Type>;
			last = new nodeType<Type>;
			count = 0;
		}
		bool isEmptyList() const
		{
			return (count == 0) ? true : false;
		}
		void print() const
		{
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
				newNode->link = first;
				first = newNode;
				first->info = node;
				count++;
			}
		}
		linkedListType()
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
			nodeType<Type> * temp = first;
			while (temp != NULL)
			{
				nodeType<Type> *tmp = temp;
				temp = temp->link;
				delete tmp;
			}
			first = NULL;
			last = NULL;
			count = 0;
		}
		void deleteNode()
		{

		}
		/*linkedListType(const linkedListType<Type>otherList)
		{
			copyList();
		}*/
		~linkedListType<Type>()
		{
			destroyList();
		}
	protected:
		int count;
		nodeType<Type> * first;
		nodeType<Type> * last;
	private:
		void copyList(const linkedListType<Type>&otherList)
		{
			first = otherList.first;
		}
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