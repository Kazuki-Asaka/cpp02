#include "Weapon.hpp"

Weapon::Weapon(std::string initial_weapn) {
	this->type = initial_weapn;
}

Weapon::~Weapon() {
	std::cout << "Weapon is destroy" << std::endl;
}

const std::string &Weapon::getType() {
	return (this -> type);
}

void Weapon::setTtpe(std::string type) {
	this -> type = type;
}