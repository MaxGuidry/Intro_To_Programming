#include<iostream>
class People
{
public:
	People() {};
	People(int age, int height)
	{
		m_Age = age;
		m_Height = height;
	}
private:
	int m_Age;
	int m_Height;
};
void swap(People&,People&);


int main()
{
	People Max = People(18, 135);
	People Donray = People(35, 34);
	People arrayOfPeople[2] = { Max,Donray };
	swap(arrayOfPeople[0],arrayOfPeople[1]);
	system("pause");
	return 0;
}



void swap(People& first,People& second)
{
	People temp = first;
	first = second;
	second = temp;
}