#include "sfml-utn-inspt.h"

const unsigned int ANCHO_VENT = 1366;
const unsigned int ALTO_VENT = 768;
const unsigned int FRAMERATE = 60;
RenderWindow ventana = RenderWindow({ANCHO_VENT, ALTO_VENT}, "Utenian Pacman");

int setWindow(){
    ventana.setFramerateLimit(FRAMERATE);
    return 1;
}

