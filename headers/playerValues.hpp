#include "sfml-utn-inspt.h"

CircleShape cir = CircleShape(25);
float velocidad;
Vector2f diff;

int setPlayerValues(){
    cir.setFillColor(Color(255, 242, 36));
    velocidad = 3.f;
    diff = {0,0};
    return 1;
}