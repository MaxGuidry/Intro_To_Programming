#include<iostream>
#include<string>
#include<Windows.h>
#include<time.h>
#include "ClassFile.h"


class student
{
public:
	student() {};
	student(std::string name, int age)
	{
		m_Name = name;
		m_Age = age;
	}
	std::string m_Name;
	int m_Age;
};

bool swap(student &a, student&b)
{
	student temp = a;
	a = b;
	b = temp;
	return true;
}



int main()
{
	/*
		Zombie Donray{ 100,5,"Bad Programmer", "Donray" };
		Zombie Max{ 200,20,"Good Programmer", "Max" };
		for (int Turns = 1; Turns < 6; Turns++)
		{
			Donray.Attack(Max);
		}
		items book = items("Book", .5f, true, 5);
		inventory test;
		test.addItem(book);
		*/

	student Max = student( "Max", 18 );
	student Donray = student("Donray", 90);
	student students[2] = { Max, Donray };
	swap(students[0], students[1]);
	system("pause");
	return 0;
}