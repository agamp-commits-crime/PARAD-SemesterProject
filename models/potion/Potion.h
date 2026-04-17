//
// Created by agamp on 17.04.2026.
//

#ifndef CLOWNGAME_POTION_H
#define CLOWNGAME_POTION_H

#include <string>
#include <iostream>

//foreward declarations: (needed because Clown references Potion and Potion references Clown)
class Clown;

class Potion {
private:
    std::string name;

public:

    //-- general methods
    static void applyEffect(Clown& target);

    //--setter--
    void setName(std::string name);


    //--getter--
    std::string getName();


};


#endif //CLOWNGAME_POTION_H