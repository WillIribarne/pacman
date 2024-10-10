#include "sfml-utn-inspt.h"

const unsigned int ANCHO_VENT = 1080;
const unsigned int ALTO_VENT = 900;
const unsigned int FRAMERATE = 60;
RenderWindow window = RenderWindow({ANCHO_VENT, ALTO_VENT}, "Utenian Pacman");

int setWindow(){
    window.setFramerateLimit(FRAMERATE);
    return 1;
}