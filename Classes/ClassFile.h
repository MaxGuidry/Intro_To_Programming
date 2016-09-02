#pragma once
#include<string>
#include<iostream>


class Zombie
{
public:
	Zombie(int HealthValue, int DamageAmount, std::string PreviousJob,std::string ZombieName);
	void Attack(Zombie &);
private:
	int m_Health;
	int m_Damage;
	std::string m_Occupation;
	std::string m_Name;
};