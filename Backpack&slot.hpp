#pragma once

#ifndef BACKPACK_HPP 
#define BACKPACK_HPP
#include "Items.hpp"
#include <iostream>
#include <vector>



class  Backpack {
public:
	Backpack(double maxWeight) : currentWeight_(0), maxWeight_(maxWeight){}

	void addBackpack(const Item& item)
	{
		if (currentWeight_ + item.getWeight() <= maxWeight_)
		{
			items.push_back(item);
			currentWeight_ += item.getWeight();
		}
		else
			std::cout << "Не достаточно вместимости!\n";
	}
	double getCurWeight() const { return currentWeight_; }

	void listItems()
	{
		for (const Item& item : items)
		{
			std::cout << '*' << item.getName() << std::endl;
		}			
	}
	~Backpack(){}
private:
	std::vector<Item> items;       	
	double currentWeight_;          // Текущий вес
	double maxWeight_;              // максимальный вес	 
};

class Slot {
public:
	Slot(std::string type) : type_(type), items(nullptr){}

	std::string getType() const { return type_; }

	bool canInsert(const Item& item) const
	{
		return item.getType() == type_;
	}

	void Insert(Item& item, std::string type)
	{
		if (canInsert(item))
		{
			this->items = &item;
			std::cout << item.getType() << " используется в cлоте " << type_ << std::endl;

		}
		else
		{
			std::cout << item.getType() << " не возможно использовать в слоте " << type_ << std::endl;
		}
	}
	
private:	
	std::string type_;
	Item* items;
};
#endif // !BACKPACK_HPP
