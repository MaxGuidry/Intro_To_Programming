#include<iostream>
#include<string>
#include<Windows.h>
#include<time.h>
#include<map>
#include<conio.h>
#include"PracticeClass.h"


//template<typename T>
//class Bucket
//{
//public:
//	Bucket(int size) :m_size(size) {};
//	bool Add(T a);
//	int m_size;
//	T * items = new T;
//};
//
//template<class T>
//bool Bucket<T>::Add(T a)
//{
//	items[0] = a;
//	return true;
//}
//


int main()
{
	/*Bucket<int> nums = Bucket<int>(10);
	int thingy = 2;
	nums.Add(thingy);
	Item first = Item("first");
	Item second = Item("first");
	if (first == second)
	{
		std::cout << "it worked\n";
	}*/

	RangedWeapon Bow = RangedWeapon(25.6364, 13.98, 1.345,"Terrible Bow");
	float DPS = Bow.DamagePerSecond();
	Inventory<Weapon> backpack=Inventory<Weapon>(50);
	backpack.Add(Bow);
	system("pause");
	return 0;
}

