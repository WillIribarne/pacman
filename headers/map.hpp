#include "window.hpp"

const unsigned int TILES_Y = 31;
const unsigned int TILES_X = 28;
const unsigned int X_TILE_SIZE = ANCHO_VENT / TILES_X;
const unsigned int Y_TILE_SIZE = ALTO_VENT - 100 / TILES_Y;
const char mapSketch[TILES_Y][TILES_X + 1] = {
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

int setMap(){
    
}