#pragma once

#ifndef ITEMS_HPP
#define ITEMS_HPP
#include <string>

class Item {
public:
	Item(std::string name, std::string type, double weight) :name_(name), type_(type),weight_(weight){}
	

	std::string getName() const { return name_; }
	std::string getType()const { return type_; }
	double getWeight()const { return weight_; }	

	
	
private:
	std::string name_; 
	std::string type_;
	double weight_;
};

#endif // !ITEMS_HPP
