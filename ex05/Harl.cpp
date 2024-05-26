#include "Harl.hpp"

void Harl::debug() {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl;
}

void Harl::info() {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for  more!" << std::endl;
}

void Harl::warning() {
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last maonth." << std::endl;
}

void Harl::error() {
	std::cout << "This is unaccetable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) {
	for (size_t i = 0; i < 4; i++) {
		if (level_array[i] == level) {
			(this->*function_array[i])();
			break ;
		}
	}
}

Harl::Harl() {
	level_array[0] = "DEBUG";
	level_array[1] = "INFO";
	level_array[2] = "WARNING";
	level_array[3] = "ERROR";
	function_array[0] = &Harl::debug;
	function_array[1] = &Harl::info;
	function_array[2] = &Harl::warning;
	function_array[3] = &Harl::error;
}

Harl::~Harl() {
	std::cout << "Harl is destroy" << std::endl;
}