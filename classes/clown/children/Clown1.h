//
// Created by agamp on 17.04.2026.
//

#ifndef CLOWNGAME_CLOWN1_H
#define CLOWNGAME_CLOWN1_H
#include "../Clown.hpp"
#include "../../../GameConfigurations.h"
#include <iostream>


class Clown1 : public Clown{

public:
    Clown1();

    void attack(Clown& target) override;
    void useClownPower(Power& power, Clown& enemy) override;
};


#endif //CLOWNGAME_CLOWN1_H