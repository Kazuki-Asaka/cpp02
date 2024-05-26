#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <cstdio>

class HumanB {
public:
	HumanB(std::string name);
	~HumanB();
	void attack();
	Weapon *weapon;
	void setWeapon(Weapon *s_weapon);
private:
	std::string name;
};
#endif