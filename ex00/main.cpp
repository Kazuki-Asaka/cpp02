#include "Zombie.hpp"

int main() {
    Zombie *new_zombie;

    randomChamp("akazuki");
    new_zombie = newZombie("akazukin");
    new_zombie->announce();
    randomChamp("akazuking");
    new_zombie->announce();
    delete(new_zombie);
    return (0);
}

// __attribute__((destructor))
// static void destructor(void){
//     system("leaks -q ex00");
// }