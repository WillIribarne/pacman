#include "sfml-utn-inspt.h"

class Pellet {
    private:
        int size;
        CircleShape shape;
        Vector2f position = {0, 0};
        Color color;
    public:
        Pellet(Color c, float s){
            setSize(s);
            color = c;
            shape = CircleShape(size);
            shape.setFillColor(color);
        }
        Pellet(Color c, float s, int i, int k, float X_TILE_SIZE, float Y_TILE_SIZE){
            setSize(s);
            color = c;
            shape = CircleShape(size);
            shape.setFillColor(color);
            setPositionInMap(i, k, X_TILE_SIZE, Y_TILE_SIZE);
            shape.setPosition(position);
        }
        void setPositionInMap(int i, int k, float X_TILE_SIZE, float Y_TILE_SIZE){
            Vector2f pelletPos = {X_TILE_SIZE * k, Y_TILE_SIZE * i}; //actual position of pellet in window
            position = {pelletPos.x + (X_TILE_SIZE - size * 2) / 2, pelletPos.y + (Y_TILE_SIZE - size * 2) / 2};
        }
        void setSize(float s){
            size = s;
        }
        CircleShape getshape(){
            return shape;
        }
};

class PowerPellet: public Pellet {
    private:
        float effectDuration;
    public:
        PowerPellet(Color c, float s, float eD) : Pellet(c, s), effectDuration(eD) {}     
        PowerPellet(Color c, float s, float eD, int i, int k, float X_TILE_SIZE, float Y_TILE_SIZE) : Pellet(c, s, i, k, X_TILE_SIZE, Y_TILE_SIZE), effectDuration(eD) {}
};