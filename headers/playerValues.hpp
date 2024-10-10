#include "sfml-utn-inspt.h"

CircleShape pacmanito = CircleShape(20);
float velocidad;
Vector2f diff;

int setPlayerValues(){
    pacmanito.setFillColor(Color(255, 242, 36));
    pacmanito.setPosition({515.f, 675.f});
    velocidad = 3.f;
    diff = {0,0};
    return 1;
}