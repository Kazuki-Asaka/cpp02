#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {
public:
	Weapon(std::string inital_weapon);
	~Weapon();
	const std::string &getType();
	void setTtpe(std::string type);
private:
	std::string type;
};

#endif