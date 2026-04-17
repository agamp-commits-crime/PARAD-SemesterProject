//
// Created by agamp on 17.04.2026.
//

#ifndef CLOWNGAME_GAMECONFIGURATIONS_H
#define CLOWNGAME_GAMECONFIGURATIONS_H

#include <string>

namespace GameConfig {
    constexpr int MAX_POTION_COUNT = 3;


}

namespace Clown1Config {
    inline const std::string NAME = "Ralph Rodeo";
    const int MAX_HP = 10;
    const int MAX_POWER = 10;
    const int MAX_DAMAGE = 10;
}

namespace Clown2Config {
    inline const std::string NAME = "Haley Harlequin";
    const int MAX_HP = 10;
    const int MAX_POWER = 10;
    const int MAX_DAMAGE = 10;
}
namespace Clown3Config {
    inline const std::string NAME = "Clown4";
    const int MAX_HP = 11;
    const int MAX_POWER = 9;
    const int MAX_DAMAGE = 20;
};

#endif //CLOWNGAME_GAMECONFIGURATIONS_H