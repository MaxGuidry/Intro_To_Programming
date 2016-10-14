#include<iostream>
#include<string>
#include<Windows.h>
#include<time.h>
#include<map>
#include<conio.h>
#include"PracticeClass.h"


template<typename T>
class Bucket
{
public:
	Bucket(int size) :m_size(size) {};
	bool Add(T a);
	int m_size;
	T * items = new T;
};

template<class T>
bool Bucket<T>::Add(T a)
{
	items[0] = a;
	return true;
}

class Weapon
{//TODO templates/overides/inheritance
public:
	float DamagePerSecond();
private:
	float m_minimumDamage;
	float m_maximumDamage;
	float m_attackSpeed;
};

int main()
{
	Bucket<int> nums = Bucket<int>(10);
	int thingy = 2;
	nums.Add(thingy);
	Item first = Item("first");
	Item second = Item("first");
	if (first == second)
	{
		std::cout << "it worked\n";
	}
	system("pause");
	return 0;
}

