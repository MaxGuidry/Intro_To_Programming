#include<iostream>
#include<string>
#include<Windows.h>
#include<time.h>
#include "ClassFile.h"
#define underline "1Bh[4m";


int main()
{

	underline std::cout << "jdjdjdjdjdfaskldfsad" << std::endl;
	Zombie Donray{ 100,5,"Bad Programmer", "Donray" };
	Zombie Max{ 200,20,"Good Programmer", "Max" };
	for (int Turns = 1; Turns < 6; Turns++)
	{
		Donray.Attack(Max);
	}
	system("pause");
	return 0;
}

