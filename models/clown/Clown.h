#ifndef CLOWNGAME_CLOWN_H
#define CLOWNGAME_CLOWN_H
#include <string>
#include <array>
#include "../../GameConfigurations.h"
#include "../power/Power.h"
#include "../potion/Potion.h"
#include <iostream>

//foreward declarations: (needed because Clown references Potion and Potion references Clown)
class Potion;

class Clown {
protected:
    Clown(const std::string& name, int maxHP, int maxPower, int damage);

private:
    //fields
    int maxHP;
    int currentHP;
    int maxClownPower;
    int currentClownPower;
    std::array<Potion, GameConfig::MAX_POTION_COUNT> potions;
    Power power;
    std::string name;
    int damage;

    //methods
    virtual void attack(Clown &target) = 0; //Es funktionmiert immer gleich, aber die Ausgaben sind andere
    virtual void useClownPower(Power& power, Clown& enemy) = 0; //Es funktioniuert immer gleich, aber die Ausgaben sind andere
    void drinkPotion(); //immer gleich auch Ausgaben

public:
    virtual ~Clown() = default;

    // Getter
    std::string getName() const;
    int getMaxHP() const;
    int getCurrentHP() const;
    int getMaxClownPower() const;
    int getCurrentClownPower() const;
    const std::array<Potion, GameConfig::MAX_POTION_COUNT>& getPotions() const;
    const Power& getPower() const;
    int getDamage() const;
    // Setter
    void setName(const std::string newName);
    void setMaxHP(int value);
    void setCurrentHP(int value);
    void setMaxClownPower(int value);
    void setCurrentClownPower(int value);
    void setPotions(const std::array<Potion, GameConfig::MAX_POTION_COUNT>& newPotions);
    void setPower(const Power& newPower);
};

#endif //CLOWNGAME_CLOWN_H