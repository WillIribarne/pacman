#define pacman
#include "sfml-utn-inspt.h"
#include "headers/events.hpp"
#include "headers/map.hpp"

void playpacman(){
    pacmanito.setFillColor(Color(255, 251, 4));
    window.setFramerateLimit(FRAMERATE);
    while (window.isOpen()) {
        read_events(window);
        window.clear();
        generateMap();
        window.draw(pacmanito);
        window.display();
        (pacmanito).move(pacmanMove);
    }
}

