#include<iostream>
#include<string>
#include<Windows.h>
#include<time.h>
#include "ClassFile.h"

int main()
{
/*
	Zombie Donray{ 100,5,"Bad Programmer", "Donray" };
	Zombie Max{ 200,20,"Good Programmer", "Max" };
	for (int Turns = 1; Turns < 6; Turns++)
	{
		Donray.Attack(Max);
	}*/
	
	items book = items("Book", .5f, true, 5);
	inventory test;
	test.addItem(book);
	system("pause");
	return 0;
}