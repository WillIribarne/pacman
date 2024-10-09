#include "window.hpp"

const unsigned int ROWS = 31;
const unsigned int COLUMNS = 28;
float X_TILE_SIZE = ANCHO_VENT / COLUMNS;
float Y_TILE_SIZE = ALTO_VENT / ROWS;

const char mapSketch[ROWS][COLUMNS + 1] = {
    "############################",
    "#............##............#",
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
    "#..........................#",
    "############################",
};

Vector2f currentTilePosition(int i, int k){
    return {((int) X_TILE_SIZE % COLUMNS / 2) + X_TILE_SIZE * k, ((int) Y_TILE_SIZE % ROWS / 2) + Y_TILE_SIZE * i};
}


void generateMap(){
    for (int i = 0; i < ROWS; i++){
        for (int k = 0; k < COLUMNS; k++){
            RectangleShape rec = RectangleShape ({X_TILE_SIZE, Y_TILE_SIZE});
            rec.setPosition(currentTilePosition(i,k));
            if (mapSketch[i][k] == '#'){
                rec.setFillColor(Color(3, 15, 219)); //azul
            } else if (mapSketch[i][k] == ' ' || mapSketch[i][k] == '.'){
                rec.setFillColor(Color(0, 0, 0)); //negro
            } else if (mapSketch[i][k] == 'X'){
                rec.setFillColor(Color(255, 227, 0)); //amarillo
            } else if (mapSketch[i][k] == '|' || mapSketch[i][k] == '_'){
                rec.setFillColor(Color(255, 0, 0)); //rojo
            }
            ventana.draw(rec);
            if (mapSketch[i][k] == '.'){
                    CircleShape pellet = CircleShape(5);
                    pellet.setFillColor(Color(255, 255, 255));
                    Vector2f pelletPos = currentTilePosition(i,k);
                    pellet.setPosition({pelletPos.x + X_TILE_SIZE / 2.f - 5.f / 2.f, pelletPos.y + Y_TILE_SIZE / 2.f - 5.f / 2.f});
                    ventana.draw(pellet);
                }
        }
    }
}