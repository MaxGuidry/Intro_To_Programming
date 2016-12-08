#pragma once
#include<iostream>
const float pi = 3.14159265359;

class BaseShape
{
public:
	virtual void DebugPrint() = 0;
};

class Point :public BaseShape
{
public:
	void DebugPrint()override
	{
		std::cout << "Point\n	Position: " <<Xposition << "," << Yposition << std::endl;
	}
	float getX()
	{
		return Xposition;
	}
	float getY()
	{
		return Yposition;
	}
	Point() {};
	Point(float X, float Y) :Xposition(X),Yposition(Y) {};
private:
	float Xposition, Yposition;
};
class Line : public BaseShape
{
public:
	void DebugPrint()override
	{
		std::cout << "Line\n	Start Position: "<<start.getX()<< "," << start.getY();
		std::cout << "\n End Position: " << end.getX() << "," << end.getY();
		std::cout<< "\n		Slope: "<< Slope() << "\n		Length: " << Length() << "\n";
	}
	Line() {};
	Line(float X1, float Y1, float X2, float Y2) :start(X1, Y1), end(X2, Y2) {};
	
		
	float Length()
	{
		return sqrt((start.getX() - end.getX())*(start.getX() - end.getX()) + (start.getY() - end.getY())*(start.getY() - end.getY()));
	}
	float Slope()
	{
		if (end.getX() - start.getX() == 0)
		{
			return ;
		}
		return (end.getY() - start.getY()) / (end.getX() - start.getX());
	}
	Point getStart()
	{
		return start;
	}
	Point getEnd()
	{
		return end;
	}
private:
	Point start,end;
};

class Rectangle : public BaseShape
{
public:
	void DebugPrint()override
	{
		std::cout << "Rectangle\n	Position: " <<side1.getStart().getX()+(width/2)<< "," << side2.getStart().getY()-(height/2)<< "\n	Height: " << height << "Width: " << width << "\n";
	}
	
	Line getFirstSide()
	{
		return side1;
	}
	Line getSecondSide()
	{
		return side2;
	}
	Line getThirdSide()
	{
		return side3;
	}
	Line getFourthSide()
	{
		return side4;
	}
	float area()
	{
		return height*width;
	}
private:
	Line side1,side2,side3,side4;
	float height, width;
};

class Circle : public BaseShape
{
public:
	void DebugPrint()override
	{
		std::cout << "Circle\n	Position: " << center.getX() << "," << center.getY() << "\n	Radius: " << radius
			<< "\n	Area: " << area() << "\n	Circumference: "<<circumference()<<"\n";
	}
	Circle() {};
	Circle(float X, float Y, float rds) :center(X,Y), radius(rds) {};
	float area()
	{
		return pi*(radius*radius);
	}
	float circumference()
	{
		return 2 * pi*(radius);
	}
private:
	Point center;
	float radius;
};

class Triangle : public BaseShape
{
public:
	void DebugPrint()override
	{
		std::cout << "Triangle\n: ";
		
	}
	Triangle(float V1X, float V1Y, float V2X, float V2Y, float V3X, float V3Y)
	{
		side1 = Line(V1X, V1Y,V2X,V2Y);
		side2 = Line(V2X, V2Y, V3X, V3Y);
		side3 = Line(V3X, V3Y, V1X, V1Y);
	}
private:
	Line side1,side2, side3;
};