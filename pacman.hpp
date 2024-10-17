#define pacman
#include "sfml-utn-inspt.h"
#include "headers/events.hpp"
#include "headers/map.hpp"

void playpacman(){
    Pacman pacmanito;

    while (window.isOpen()) {
        read_events(window, pacmanito);
        window.clear();
        generateMap();
        window.draw(pacmanito.getshape());
        window.display();
        (pacmanito.getshape()).move(pacmanito.getMovementVec());
    }
}

