#pragma once
#include<string>
#include<iostream>

class Zombie
{
public:
	Zombie(int HealthValue, int DamageAmount, std::string PreviousJob, std::string ZombieName);
	void Attack(Zombie &);
private:
	int m_Health;
	int m_Damage;
	std::string m_Occupation;
	std::string m_Name;
};

class items
{
public:
	items() {};
	items(std::string name, float weight, bool stackable, int stackCount)
	{
		m_name = name;
		m_weight = weight;
		m_stackable = stackable;
		m_stackCount = stackCount;
	}
	std::string m_name;
	float m_weight;
	bool m_stackable;
	int m_stackCount;
};

class inventory
{
public:
	inventory() {};

	items m_items[16];
	int m_numItems = 0;
	bool addItem(items& item)
	{
		if (m_numItems > 15)
		{
			return false;
		}

		m_items[m_numItems] = item;
		m_numItems++;
		/*for (int i = 0; i < 16; i++)
		{
			if (m_items[i] != NULL)
			{
				m_items[i] = item;
				break;
			}
		}*/
		return true;
	}

	items book = items("Book", .5f, true, 5);
};