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
	test->Add(2);
	test->Add(5);
	test->Add(9);
	test->Add(1);
	test->print();
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