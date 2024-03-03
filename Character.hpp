#pragma once

#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "Backpack&slot.hpp"


class Person {
public:
	Person(): name_("empty"),age_(0), health_(0){}
	Person(std::string name, int age,  int health) : name_(name), age_(age), health_(health){}

	void insertItem(Item& item, Slot& slot)
	{		
		slot.Insert(item, item.getType());		
		put_on.push_back(&item);
	}

	void listItems()
	{
		
		for (auto &v : put_on)
		{
			std::cout << '*' << v->getName() << std::endl;
		}
	}
private:	
	std::vector<Item*> put_on;	
	std::string name_;
	int age_;
	int health_;
};



#endif // !CHARACTER_HPP

