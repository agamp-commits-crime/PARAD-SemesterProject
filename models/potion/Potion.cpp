//
// Created by agamp on 17.04.2026.
//

#include "Potion.h"
//-- general Methods
void Potion::applyEffect(Clown& target) {
    std::cout << "currently in applyEffect in Clown!\n needs to be implemented";
}


// --- setter
void Potion::setName(std::string name) {
    this->name = name;
}

// ---- getter
std::string Potion::getName() {
    return name;
}
