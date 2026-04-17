//
// Created by agamp on 17.04.2026.
//

#include "GameUI.h"

void GameUI::printGreeting() {
    //The ASCII Art stems from: https://www.asciiart.eu/people/occupations/clowns
    std::cout << "________________________________     Q" << std::endl;
    std::cout << "|                              |  ___|\\_.-," << std::endl;
    std::cout << "|        Welcome to             S\\ Q~\\___ \\|" << std::endl;
    std::cout << "|        ClownWars             |(   )o 5) Q" << std::endl;
    std::cout << "|                              |\\\\  \\_ ()" << std::endl;
    std::cout << "|      Enter S to start        | \\' ._'/'. " << std::endl;
    std::cout << "|      or E to exit           .-. '-(  x< \\" << std::endl;
    std::cout << "|                 ,o         /\\, '.  )  /'\\\\" << std::endl;
    std::cout << "|_______________ \\'.__.----/ .'\\  '.-'/   \\\\" << std::endl;
    std::cout << "               snd '---'q__/.'___ ;    /     \\\\_" << std::endl;
    std::cout << "                        '---'     '--'       `\"'" << std::endl;
}


//ist jetzt eigentlich schon in Game implementiert
void GameUI::printFighterMenu(/*Should get a List of Clowns*/) {
    std::cout << "Choose your Fighter: " << std::endl;

}