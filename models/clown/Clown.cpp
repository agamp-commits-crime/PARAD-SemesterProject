#include "Clown.h"

#include <iostream>
#include <ostream>



// ---Konstruktor---
Clown::Clown(const std::string& name, int maxHP, int maxPower, int damage)
    : name(name),
      maxHP(maxHP),
      currentHP(maxHP),
      maxClownPower(maxPower),
      currentClownPower(maxPower),
    damage(damage)
{

}

// --- general methods ---

void Clown::drinkPotion() {
    std::cout << name << " is choosing a potion:\n";

    // --- Potions anzeigen ---
    for (size_t i = 0; i < potions.size(); ++i) {
        if (potions[i].getName().empty()) continue;
        std::cout << i << ": " << potions[i].getName() << std::endl;
    }

    // --- User Input ---
    int choice;
    std::cout << "Choose potion index: ";
    std::cin >> choice;

    // --- Input validieren ---
    if (choice < 0 || choice >= potions.size()) {
        std::cout << "Invalid choice!\n";
        return;
    }

    // --- Effekt anwenden ---
    potions[choice].applyEffect(*this);

    // --- Potion "löschen" ---
    // einfache Lösung: durch Default-Potion ersetzen
    potions[choice] = Potion();

    std::cout << "Potion used!\n";

}

// --- Getter ---
std::string Clown::getName() const {
    return name;
}
int Clown::getMaxHP() const {
    return maxHP;
}

int Clown::getCurrentHP() const {
    return currentHP;
}

int Clown::getMaxClownPower() const {
    return maxClownPower;
}

int Clown::getCurrentClownPower() const {
    return currentClownPower;
}

const std::array<Potion, GameConfig::MAX_POTION_COUNT>& Clown::getPotions() const {
    return potions;
}

const Power& Clown::getPower() const {
    return power;
}

int Clown::getDamage() const {
    return damage;
}

// --- Setter ---
void Clown::setName(const std::string newName) {
    //brauche ich saveguards?
    name = newName;
}
void Clown::setMaxHP(int value) {
    maxHP = value;
}

void Clown::setCurrentHP(int value) {
    if (value < 0) {
        value = 0;
    }
    if (value > maxHP) {
        value = maxHP;
    }else {
        currentHP = value;
    }

}

void Clown::setMaxClownPower(int value) {
    maxClownPower = value;
}

void Clown::setCurrentClownPower(int value) {
    if (value < 0) {
        value = 0;
    }
    if (value > maxClownPower) {
        value = maxClownPower;
    }else {
        currentClownPower = value;
    }
}

void Clown::setPotions(const std::array<Potion, GameConfig::MAX_POTION_COUNT>& newPotions) {
    potions = newPotions;
}

void Clown::setPower(const Power& newPower) {
    power = newPower;
}