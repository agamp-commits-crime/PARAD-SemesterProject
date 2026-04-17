//
// Created by agamp on 17.04.2026.
//

#include "Game.h"


/*Wofür ist diese Funktion?
 *Printed start bildschirm
 *
 */
void Game::start() {

    //Start-Screen
    char userInput = 'a';

    this->ui.printGreeting();

    while (true) {
        std::cout << " >>";
        std::cin  >> userInput;

        userInput = std::tolower(userInput); //toLower() damit sowohl 's' als auch 'S' und das selbe für 'E' und 'e' akzeptiert wird

        if (userInput == 'e') //Programm wird beendet
            return;

        if (userInput == 's') //Endlos-Schleife wird verlassen
            break;
    }

    //Hier komme ich nur hin, wenn 'S' oder 's' eingegeben wurde

    //Clown auswählen
    this->choosePlayerClown();


    //while(1) {startRound();}

}

/*Wofür ist diese Funktion?
 * Sie lässt die Spielerin einen Clown auswählen, den sie spielen will.
 */
void Game::choosePlayerClown() {

    std::cout << "Please choose a Clown: " << std::endl;

    int input = 0;

    //currently static -> not sure how to change that
    std::cout << "1.)   "
        << Clown1Config::NAME
        << " with max health: "
        << Clown1Config::MAX_HP
        << "| with max power: "
        << Clown1Config::MAX_POWER
        << "| with damage: "
        << Clown1Config::MAX_DAMAGE
    << std::endl;

    std::cout << "2.)   "
        << Clown2Config::NAME
        << " with max health: "
        << Clown2Config::MAX_HP
        << "| with max power: "
        << Clown2Config::MAX_POWER
        << "| with damage: "
        << Clown2Config::MAX_DAMAGE
    << std::endl;

    std::cout << "3.)   "
        << Clown3Config::NAME
        << " with max health: "
        << Clown3Config::MAX_HP
        << "| with max power: "
        << Clown3Config::MAX_POWER
        << "| with damage: "
        << Clown3Config::MAX_DAMAGE
    << std::endl;

    std::cout << ">> ";
    std::cin >> input;

    while (std::cin.fail() || (input != 1 && input != 2 && input != 3)) {
        std::cin.clear(); // reset fail state (falls User einen Buchstaben o.ä. eingibt)
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // flush input

        std::cout << "Please choose a Clown by entering its number: " << std::endl;
        std::cout << ">> ";
        std::cin >> input;
    }

    if (input == 1) {
        std::cout << "You chose " << Clown1Config::NAME << "\n";
        playerClown = std::make_unique<Clown1>();
    }
    else if (input == 2) {
        playerClown = std::make_unique<Clown2>();
    }
    else if (input == 3) {
        playerClown = std::make_unique<Clown3>();
    }

}

//setter
void Game::setPlayerClown(std::unique_ptr<Clown> newClown) {
    playerClown = std::move(newClown);
}

//getter
Clown& Game::getPlayerClown() {
    return *playerClown;
}
