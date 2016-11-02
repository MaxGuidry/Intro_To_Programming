#include<iostream>
#include"List.h"
void list(nodeType<int> *);
int main()
{
	/*nodeType<int> * head;
	nodeType<int> a, b, c;
	c.info = 4;
	b.info = 2;
	a.info = 0;
	c.link = &b;
	b.link = &a;
	a.link = NULL;
	head = &c;
	list(head);*/
	LinkedList<int> *test = new LinkedList<int>();
	test->insertBack(2);
	test->insertBack(5);
	test->insertBack(9);
	test->insertBack(1);
	test->insertFirst(4);
	test->front();
	LinkedListIterator<int> temp = LinkedListIterator<int>(test->begin());
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