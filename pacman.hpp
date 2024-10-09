#define pacman
#include "sfml-utn-inspt.h"
#include "headers/events.hpp"

void playpacman(){
    setWindow();
    setPlayerValues();
    while (ventana.isOpen()) {
        leer_eventos(ventana);
        ventana.clear();
        ventana.draw(cir);
        ventana.display();
        cir.move(diff);
    }
}

