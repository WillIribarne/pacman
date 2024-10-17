#include "window.hpp"
#include "Constants.hpp"
#include "pellets.hpp"

/* const unsigned int ROWS = 31;
const unsigned int COLUMNS = 28;
float X_TILE_SIZE = ANCHO_VENT / COLUMNS;
float Y_TILE_SIZE = ALTO_VENT / ROWS; */

const char mapSketch[ROWS][COLUMNS + 1] = {
    "############################",
    "#o...........##...........o#",
    "#.####.#####.##.#####.####.#",
    "#.####.#####.##.#####.####.#",
    "#.####.#####.##.#####.####.#",
    "#..........................#",
    "#.####.##.########.##.####.#",
    "#.####.##.########.##.####.#",
    "#......##....##....##......#",
    "######.#####.##.#####.######",
    "     #.#####.##.#####.#     ",
    "     #.##..........##.#     ",
    "     #.##.|||__|||.##.#     ",
    "######.##.|      |.##.######",
    "..........|      |..........",
    "######.##.|      |.##.######",
    "     #.##.||||||||.##.#     ",
    "     #.##..........##.#     ",
    "     #.##.########.##.#     ",
    "######.##.########.##.######",
    "#............##............#",
    "#.####.#####.##.#####.####.#",
    "#.####.#####.##.#####.####.#",
    "#...##.......XX.......##...#",
    "###.##.##.########.##.##.###",
    "###.##.##.########.##.##.###",
    "#......##....##....##......#",
    "#.##########.##.##########.#",
    "#.##########.##.##########.#",
    "#o........................o#",
    "############################",
};

Vector2f currentTilePosition(int i, int k){
    return {X_TILE_SIZE * k, Y_TILE_SIZE * i};
}


void generateMap(){
    for (int i = 0; i < ROWS; i++){
        for (int k = 0; k < COLUMNS; k++){
            RectangleShape rec = RectangleShape ({X_TILE_SIZE, Y_TILE_SIZE});
            rec.setPosition(currentTilePosition(i,k));
            rec.setFillColor(Color(0, 0, 0)); //negro
            if (mapSketch[i][k] == '#'){
                rec.setFillColor(Color(3, 15, 219)); //azul
            } else if (mapSketch[i][k] == 'X'){
                rec.setFillColor(Color(255, 227, 0)); //amarillo
            } else if (mapSketch[i][k] == '|' || mapSketch[i][k] == '_'){
                rec.setFillColor(Color(255, 0, 0)); //rojo
            }
            window.draw(rec);
            if (mapSketch[i][k] == '.'){
                Pellet pellet(Color(255, 255, 255), 5.f, i, k);
                /*CircleShape pellet = CircleShape(5);
                pellet.setFillColor(Color(255, 255, 255));
                Vector2f pelletPos = currentTilePosition(i,k);
                pellet.setPosition({pelletPos.x + (X_TILE_SIZE - pellet.getRadius() * 2) / 2, pelletPos.y + (Y_TILE_SIZE - pellet.getRadius() * 2) / 2});
                */
                window.draw(pellet.getshape());
            } else if (mapSketch[i][k] == 'o'){
                PowerPellet powerpellet(Color(255, 255, 255), 12.5f, 7.f, i, k);
                /*
                CircleShape powerpellet = CircleShape(12.5f);
                powerpellet.setFillColor(Color(255, 255, 255));
                Vector2f pelletPos = currentTilePosition(i,k);
                powerpellet.setPosition({pelletPos.x + (X_TILE_SIZE - powerpellet.getRadius() * 2) / 2, pelletPos.y + (Y_TILE_SIZE - powerpellet.getRadius() * 2) / 2});
                */
                window.draw(powerpellet.getshape());
            }
            
        }
    }
}