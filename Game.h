#include "GameConfigurations.h"
//
// Created by agamp on 17.04.2026.
//

#ifndef CLOWNGAME_GAME_H
#define CLOWNGAME_GAME_H

#include "./ui/GameUi.h"
#include "./models/clown/Clown.h"
#include "./models/clown/Clown1.h"
#include "models/clown/Clown2.h"
#include "models/clown/Clown3.h"
#include "./GameConfigurations.h"
#include <iostream>
#include <limits>
#include <memory> //für unique_ptr -< was ist ein unique_ptr?



class Game {
private:
    //-- fields
    GameUI ui;
    std::unique_ptr<Clown> playerClown;
    //enemys hier speichern oder pro level generieren?

    public:
    void start();
    void choosePlayerClown();

    //setter
    void setPlayerClown(std::unique_ptr<Clown> newClown);


    //getter
    Clown& getPlayerClown();

};


#endif //CLOWNGAME_GAME_H