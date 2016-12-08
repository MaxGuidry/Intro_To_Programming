#include<iostream>
#include"Shapes.h"
int main()
{
	Triangle test =Triangle(1, 2, 3, 4, 5, 6);
	test.DebugPrint();
	Circle myCircle = Circle(3, 4, 8);
	Line lineTest = Line(1, 3, 3, 4);
	Line line = Line(1, 2, 1, 4);
	float slopey =line.Slope();
	float lingth = lineTest.Length();
	float slope = lineTest.Slope();
	myCircle.DebugPrint();
	system("pause");
	return 0;
}