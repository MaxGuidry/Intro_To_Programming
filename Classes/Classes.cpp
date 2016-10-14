#include<iostream>
#include<string>
#include<Windows.h>
#include<time.h>
#include "PracticeClass.h"



class Math
{
public:
	static int add(int a, int b) { return a + b; }
};


int main()
{
	
	int num = Math::add(1, 2);
	system("pause");
	return 0;
}