#pragma once
#include<string>
#include<iostream>
#include<Windows.h>
#include<time.h>

template<typename T>
class Inventory
{
public:
	Inventory(int size) :m_size(size) {};
	bool Add(T a);
	int m_size;
	T * items = new T;
};
template<typename T>
bool Inventory<T>::Add(T a)
{
	items[0] = a;
	return true;
}
class Weapon
{//TODO templates/overides/inheritance
public:
	Weapon() {}
	Weapon(float minDamage, float maxDamage, float atkSpeed,std::string name) :m_minimumDamage(minDamage), m_maximumDamage(maxDamage), m_attackSpeed(atkSpeed),m_name(name) {}
	float DamagePerSecond();
	bool operator ==(const Weapon&thisWeapon)const;
private:
	float m_minimumDamage;
	float m_maximumDamage;
	float m_attackSpeed;
	std::string m_name;
};
class RangedWeapon :public Weapon
{
public:
	RangedWeapon(float minDamage, float maxDamage, float atkSpeed,std::string name):Weapon(minDamage,maxDamage,atkSpeed,name){}
private:

};
class MeleeWeapon :public Weapon
{
public:
	MeleeWeapon(float minDamage, float maxDamage, float atkSpeed, std::string name) :Weapon(minDamage, maxDamage, atkSpeed, name) {}
private:
};
float Weapon::DamagePerSecond()
{
	return ((m_maximumDamage + m_minimumDamage)/2) / m_attackSpeed;
}
bool Weapon::operator ==(const Weapon&thisWeapon)const
{
	if (m_attackSpeed == thisWeapon.m_attackSpeed&&m_maximumDamage == thisWeapon.m_maximumDamage&&m_minimumDamage == thisWeapon.m_minimumDamage&&m_name==thisWeapon.m_name)
		return true;
	return false;
}
//
//
//class Item
//{
//public:
//	bool operator ==(const Item& theItem)const;
//	Item(std::string name) :m_name(name) {};
//	std::string m_name;
//};
//
//bool Item::operator ==(const Item& theItem)const
//{
//	if (m_name == theItem.m_name)
//		return true;
//	return false;
//}