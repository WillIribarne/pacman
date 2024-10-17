#include "window.hpp"
#include "pellets.hpp"

const unsigned int ROWS = 31;
const unsigned int COLUMNS = 28;
float X_TILE_SIZE = ANCHO_VENT / COLUMNS;
float Y_TILE_SIZE = ALTO_VENT / ROWS;

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


void generateMap(){
    for (int i = 0; i < ROWS; i++){
        for (int k = 0; k < COLUMNS; k++){
            RectangleShape rec = RectangleShape ({X_TILE_SIZE, Y_TILE_SIZE});
            rec.setPosition({X_TILE_SIZE * k, Y_TILE_SIZE * i});
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
                Pellet pellet(Color(255, 255, 255), 5.f, i, k, X_TILE_SIZE, Y_TILE_SIZE);
                window.draw(pellet.getshape());
            } else if (mapSketch[i][k] == 'o'){
                PowerPellet powerpellet(Color(255, 255, 255), 12.5f, 7.f, i, k, X_TILE_SIZE, Y_TILE_SIZE);
                window.draw(powerpellet.getshape());
            }
            
        }
    }
}