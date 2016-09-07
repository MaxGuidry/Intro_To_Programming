#include"ClassFile.h"



Zombie::Zombie(int HealthValue, int DamageAmount, std::string PreviousJob, std::string ZombieName)
{
	m_Health = HealthValue;
	m_Damage = DamageAmount;
	m_Occupation = PreviousJob;
	m_Name = ZombieName;
}

void Zombie::Attack(Zombie &defender)
{
	this->m_Health -= defender.m_Damage;//attacker is taking damage
	defender.m_Health -= this->m_Damage;//defender is taking damage
	std::cout << "Zombie " << defender.m_Name << " has " << defender.m_Health << " health left" << std::endl;
	std::cout << "Zombie " << this->m_Name << " has " << this->m_Health << " health left" << std::endl;
}
