#include "window.hpp"

const unsigned int ROWS = 31;
const unsigned int COLUMNS = 28;
float X_TILE_SIZE = ANCHO_VENT / COLUMNS;
float Y_TILE_SIZE = ALTO_VENT / ROWS;
const char mapSketch[ROWS][COLUMNS + 1] = {
        "############################",
        "#            ##            #",
        "# #### ##### ## ##### #### #",
        "# #### ##### ## ##### #### #",
        "# #### ##### ## ##### #### #",
        "#                          #",
        "# #### ## ######## ## #### #",
        "# #### ## ######## ## #### #",
        "#      ##    ##    ##      #",
        "###### ##### ## ##### ######",
        "     # ##### ## ##### #     ",
        "     # ##          ## #     ",
        "     # ## |||__||| ## #     ",
        "###### ## |      | ## ######",
        "          |      |          ",
        "###### ## |      | ## ######",
        "     # ## |||||||| ## #     ",
        "     # ##          ## #     ",
        "     # ## ######## ## #     ",
        "###### ## ######## ## ######",
        "#            ##            #",
        "# #### ##### ## ##### #### #",
        "# #### ##### ## ##### #### #",
        "#   ##       XX       ##   #",
        "### ## ## ######## ## ## ###",
        "### ## ## ######## ## ## ###",
        "#      ##    ##    ##      #",
        "# ########## ## ########## #",
        "# ########## ## ########## #",
        "#                          #",
        "############################",
    };

int colorMap(){
    for (int i = 0; i < ROWS; i++){
        for (int k = 0; k < COLUMNS; k++){
            RectangleShape rec = RectangleShape ({X_TILE_SIZE, Y_TILE_SIZE});
            if (mapSketch[i][k] == '#'){
                rec.setFillColor(Color(3, 15, 219)); //azul
            } else if (mapSketch[i][k] == ' '){
               rec.setFillColor(Color(255, 255, 255)); //blanco
            } else if (mapSketch[i][k] == 'X'){
                rec.setFillColor(Color(255, 227, 0)); //amarillo
            } else {
                rec.setFillColor(Color(255, 0, 0)); //rojo
            }
            rec.setPosition({((int) X_TILE_SIZE % COLUMNS / 2) + X_TILE_SIZE * k, ((int) Y_TILE_SIZE % ROWS / 2) + Y_TILE_SIZE * i});
            ventana.draw(rec);
        }
    }
    return 1;
}

int generateMap(){
    colorMap();
    return 1;
}