#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
    this -> name = name;
}

Zombie::~Zombie() {
    std::cout << name << " is destroy" << std::endl;
}

void    Zombie::announce() {
    std::cout << name << ":" << " BraiiiiiiinnnzzzZ..." << std::endl;
}