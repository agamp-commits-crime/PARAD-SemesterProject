//
// Created by agamp on 17.04.2026.
//

#ifndef CLOWNGAME_CLOWN2_H
#define CLOWNGAME_CLOWN2_H

#include "Clown.h"
#include "../../GameConfigurations.h"
#include <iostream>

class Clown2 : public Clown {
    public:
    Clown2();

    void attack(Clown& target) override;
    void useClownPower(Power& power, Clown& enemy) override;
};


#endif //CLOWNGAME_CLOWN2_H