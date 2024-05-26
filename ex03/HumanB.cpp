#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
	this -> name = name;
	weapon = NULL;
}

HumanB::~HumanB() {
	std::cout << "HumanB is destroy" << std::endl;
}

void HumanB::attack() {
	if (weapon == NULL)
		std::cout << name << " can't attack" << std::endl;
	else
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon *s_weapon) {
	this -> weapon = s_weapon;
}