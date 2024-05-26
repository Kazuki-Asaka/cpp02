#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
    this -> name = name;
}

Zombie::Zombie() {
    std::cout << "newZombie hahahaha" << std::endl;
}

Zombie::~Zombie() {
    std::cout << name << " is destroy" << std::endl;
}

void    Zombie::announce() {
    std::cout << name << ":" << " BraiiiiiiinnnzzzZ..." << std::endl;
}
void    Zombie::setName(std::string name) {
    this -> name = name;
}