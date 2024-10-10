#include "sfml-utn-inspt.h"

class Pacman {
    private:
        CircleShape shape;
        float speed;
        Vector2f pacmanMove;
    public:
        Pacman(){
            shape = CircleShape(20);
            speed = 3.f;
            pacmanMove = {0,0};
            setPacmanColor(Color(255, 242, 36));
        }
        void setPacmanColor(Color color){
            shape.setFillColor(color);
        }
        void setSpeed(float spd){
            speed = spd;
        }
        void setMovement(Vector2f vec){
            pacmanMove = vec;
        }
};


/*int setPlayerValues(){
    pacmanito.setFillColor(Color(255, 242, 36));
    pacmanito.setPosition({515.f, 675.f});
    velocidad = 3.f;
    diff = {0,0};
    return 1;
} */