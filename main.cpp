#include "Character.hpp"



int main() {
	setlocale(LC_ALL, "ru");

	Person Misha("Misha", 29, 100);

	Slot armorSlot("Броня");
	Slot headArmor("Голова");

	Item item1("Вода", "Еда", 0.5);
	Backpack Backpack1(20);
	Backpack1.addBackpack(item1);

	Item armor("Нагрудник", "Броня", 3.0);
	Backpack1.addBackpack(armor);
	
	std::cout << "Содержимое рюкзака: \n";
	Backpack1.listItems();	

	std::cout << "Текущий вес рюкзака: " << Backpack1.getCurWeight() << std::endl;


	Misha.insertItem(armor, armorSlot);
	Misha.insertItem(item1, headArmor);


	return 0;
}