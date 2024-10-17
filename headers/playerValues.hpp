#include "sfml-utn-inspt.h"

CircleShape pacmanito = CircleShape(20.f);
float speed = 3.f;
Vector2f pacmanMove = {0,0};

void setMovement(Vector2f vec){
    pacmanMove = vec;
}