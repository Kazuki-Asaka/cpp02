#include "HumanA.hpp"

HumanA::HumanA(std::string name,Weapon& initial_weapon):weapon(initial_weapon){
	this -> name = name;
}

HumanA::~HumanA() {
	std::cout << "HumanA is destroy" << std::endl;
}

void HumanA::attack() {
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}