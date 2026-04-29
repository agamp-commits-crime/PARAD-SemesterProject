#ifndef CLOWNGAME_CLOWN_H
#define CLOWNGAME_CLOWN_H
#include <string>
#include <memory>
#include <array>
#include "../../GameConfigurations.h"
#include "../power/Power.h"
#include "../consumable/IConsumable.hpp"
#include <iostream>


class Clown {
protected:
    Clown(const std::string& name, int maxHP, int maxPower, int damage);

private:
    //fields
    int maxHP;
    int currentHP;
    int maxClownPower;
    int currentClownPower;
    std::array<std::unique_ptr<IConsumable>, GameConfig::MAX_POTION_COUNT> consumables;
    Power power;
    std::string name;
    int damage;

    //methods
    virtual void attack(Clown &target) = 0; //Es funktionmiert immer gleich, aber die Ausgaben sind andere
    virtual void useClownPower(Power& power, Clown& enemy) = 0; //Es funktioniuert immer gleich, aber die Ausgaben sind andere
    void useConsumable(); //immer gleich auch Ausgaben

public:
    virtual ~Clown() = default;

    // Getter
    std::string getName() const;
    int getMaxHP() const;
    int getCurrentHP() const;
    int getMaxClownPower() const;
    int getCurrentClownPower() const;
    const Power& getPower() const;
    int getDamage() const;
    const std::array<std::unique_ptr<IConsumable>, GameConfig::MAX_POTION_COUNT>& getConsumables() const;


    // Setter
    void setName(const std::string newName);
    void setMaxHP(int value);
    void setCurrentHP(int value);
    void setMaxClownPower(int value);
    void setCurrentClownPower(int value);
    void setPower(const Power& newPower);

    //weitere methoden

};

#endif //CLOWNGAME_CLOWN_H