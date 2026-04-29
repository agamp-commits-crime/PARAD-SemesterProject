//
// Created by agamp on 17.04.2026.
//

#include "Clown1.h"

Clown1::Clown1()
    : Clown(Clown1Config::NAME, Clown1Config::MAX_HP, Clown1Config::MAX_POWER, Clown1Config::MAX_DAMAGE) {}

void Clown1::attack(Clown& target) {
    std::cout << "DEBUG: currently in attack() of Clown 1" << std::endl; //DEBUG
    //ich setze die Leben von dem Target auf die Leben die es momentan hat - meine damage-strength
    target.setCurrentHP(target.getCurrentHP() - this->getDamage());

    //Logik in jeder Kind-Clown-Klasse gleich
    //Fluff-Text anpassen
}

void Clown1::useClownPower(Power& power, Clown& enemy) {
    std::cout << "DEBUG: currently in useClownPower() of Clown 1" << std::endl; //DEBUG
    //depending on Power we want to do different things -> we need to know what the powers do

    //funktion aus Power aufrufen aber entweder mich oder gegner übergeben

    //Logik in jeder Kind-Clown-Klasse gleich
    //Fluff-Text anpassen
}