#include<iostream>
#include"List.h"
void list(nodeType<int> *);
int main()
{
	
	linkedListType<int> *test = new linkedListType<int>();
	linkedListType<int> *second = new linkedListType<int>();
	test->insertBack(2);
	test->insertBack(5);
	test->insertBack(9);
	test->insertBack(1);
	test->insertFirst(4);
	*second = *test;
	second->print();
	test->front();
	LinkedListIterator<int> temp =LinkedListIterator<int>(test->begin());
	bool d=test->search(7);
	test->destroyList();
	system("pause");
	return 0;
}

void list(nodeType<int> * node)
{
	while (node != NULL)
	{
		std::cout << node->info;
		node = node->link;
	}
}