#include "sfml-utn-inspt.h"

class Pacman {
    private:
        CircleShape shape;
        const float size = 20;
        float speed;
        Vector2f pacmanMove;
    public:
        Pacman(){
            shape = CircleShape(size);
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
        float getSpeed(){
            return speed;
        }
        CircleShape getshape(){
            return shape;
        }
        Vector2f getMovementVec(){
            return pacmanMove;
        }
};