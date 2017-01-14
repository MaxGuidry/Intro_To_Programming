#include<iostream>
#include"List.h"
void list(NodeType<int> *);
int main()
{
	
	LinkedListType<int> *test = new LinkedListType<int>();
	std::cout << "\nAdded 5 and 7 to the list:\n";
	test->insertFirst(7);
	test->insertBack(5);
	test->print();
	std::cout << "\nAdded 8 to the beginning of the list:\n";
	test->insertFirst(8);
	test->print();
	std::cout << "\nDeleted 8 from the list:\n";
	test->deleteNode(8);
	test->print();
	std::cout << "Length of the list:\n"<<test->length() <<std::endl;
	system("pause");
	return 0;
}

void list(NodeType<int> * node)
{
	while (node != NULL)
	{
		std::cout << node->info;
		node = node->link;
	}
}