#include "sfml-utn-inspt.h"
#include "map.hpp"

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
        Pellet(Color c, float s, int i, int k){
            setSize(s);
            color = c;
            shape = CircleShape(size);
            shape.setFillColor(color);
            setPositionInMap(i, k);
            shape.setPosition(position);
        }
        void setPositionInMap(int i, int k){
            Vector2f pelletPos = currentTilePosition(i, k);
            position = {pelletPos.x + (X_TILE_SIZE - size * 2) / 2, pelletPos.y + (Y_TILE_SIZE - size * 2) / 2};
        }
        Vector2f currentTilePosition(int i, int k){
            return {X_TILE_SIZE * k, Y_TILE_SIZE * i};
        }
        void setSize(float s){
            size = s;
        }
};

class PowerPellet: public Pellet {
    private:
        float effectDuration;
    public:
        PowerPellet(Color c, float s, float eD) : Pellet(c, s), effectDuration(eD) {}s     
        PowerPellet(Color c, float s, float eD, int i, int k) : Pellet(c, s, i, k), effectDuration(eD) {}
};