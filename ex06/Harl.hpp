 #ifndef HARL_HPP
 #define HARL_HPP

#include <iostream>
#include <string>

class Harl {
public:
	Harl();
	~Harl();
	void complain(std::string level);
	std::string level_array[4];
	void (Harl::*function_array[4])();
private:
	void debug();
	void info();
	void warning();
	void error();
};

 #endif