#define pacman
#include "sfml-utn-inspt.h"
#include "headers/events.hpp"
#include "headers/map.hpp"

void playpacman(){
    setWindow();
    setPlayerValues();
    while (ventana.isOpen()) {
        leer_eventos(ventana);
        ventana.clear();
        generateMap();
        ventana.draw(pacmanito);
        ventana.display();
        pacmanito.move(diff);
    }
}

