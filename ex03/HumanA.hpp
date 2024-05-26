#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
public:
	HumanA(std::string name, Weapon& initial_weapon);
	~HumanA();
	Weapon& weapon;
	void attack();
private:
	std::string name;
};

#endif