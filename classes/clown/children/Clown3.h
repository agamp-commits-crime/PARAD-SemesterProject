//
// Created by agamp on 17.04.2026.
//

#ifndef CLOWNGAME_CLOWN3_H
#define CLOWNGAME_CLOWN3_H

#include "../Clown.hpp"
#include "../../../GameConfigurations.h"
#include <iostream>

class Clown3 : public Clown{
public:
    Clown3();

    void attack(Clown& target) override;
    void useClownPower(Power& power, Clown& enemy) override;
};


#endif //CLOWNGAME_CLOWN3_H