#pragma once
#include<iostream>
#include<string>

class Animal
{
public:
	Animal() {}
	virtual void speak()=0;
};

class Bird :public Animal
{
public:
	Bird() {}
	void speak() { std::cout << "tweet\n"; }
};

class Mammal : public Animal
{
public:
	Mammal() {}
	void speak() {}
	void bark() {}
};

class Cat : public Mammal
{
public:
	Cat() {}
	void speak() { std::cout << "meow\n"; }
	void purr() { std::cout << "purr\n"; }
};

class Dog : public Mammal
{
public:
	Dog() {}
	void speak() { std::cout << "woof\n"; }
	void bark() { std::cout << "bark\n"; }
};








































//class Weapon
//{
//private:
//	std::string name;
//	float damage;
//public:
//	Weapon(std::string a, float b) :name(a), damage(b) {}
//};
//class Enemy
//{
//	int health;
//	int attack;
//	std::string name;
//public:
//	Enemy(int a, int b, std::string c): health(a), attack(b),name(c){}
//	void Attack()
//	{
//		std::cout << name << " does " << attack << " damage.\n";
//	}
//};
//
//class Orc: public Enemy
//{
//	Weapon * mainhand;
//	Weapon * offhand;
//public:
//	Orc(int a, int b, std::string c):Enemy(a,b,c) {}
//};
//
//class Troll : public Enemy
//{
//	Weapon * Club;
//
//public:
//	Troll(int a, int b, std::string c) :Enemy(a, b, c) {}
//
//};
//
