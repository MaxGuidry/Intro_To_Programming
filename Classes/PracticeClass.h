#pragma once
#include<string>
#include<iostream>
#include<Windows.h>
#include<time.h>
class Item
{
public:
	bool operator ==(const Item& theItem)const;
	Item(std::string name) :m_name(name) {};
	std::string m_name;
};

bool Item::operator ==(const Item& theItem)const
{
	if (m_name == theItem.m_name)
		return true;
	return false;
}