cmake_minimum_required(VERSION 4.1)
project(ClownGame)

set(CMAKE_CXX_STANDARD 20)

add_executable(ClownGame main.cpp
        GameConfigurations.h
        Game.cpp
        Game.h
        models/clown/clown.cpp
        models/clown/clown.h
        models/potion/Potion.cpp
        models/potion/Potion.h
        models/power/Power.cpp
        models/power/Power.h
        models/clown/Clown1.cpp
        models/clown/Clown1.h
        models/clown/Clown2.cpp
        models/clown/Clown2.h
        models/clown/Clown3.cpp
        models/clown/Clown3.h
        ui/GameUi.cpp
        ui/GameUi.h
)
