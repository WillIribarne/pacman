#define pacman
#include "sfml-utn-inspt.h"

const unsigned int ANCHO_VENT = 1366;
const unsigned int ALTO_VENT = 768;
const unsigned int FRAMERATE = 60;
const float velocidad = 3.f;
Vector2f diff = {0,0};
RenderWindow ventana = RenderWindow({ANCHO_VENT, ALTO_VENT}, "Unidad 1 - Taller de Videojuegos");

void leer_eventos(RenderWindow &window);
void pause();

void playpacman(){
    ventana.setFramerateLimit(FRAMERATE);
    CircleShape cir = CircleShape(25);

    while (ventana.isOpen()) {
        leer_eventos(ventana);
        ventana.clear();
        ventana.draw(cir);
        ventana.display();
        cir.move(diff);
    }
}

//if key.pressed == A (si se apretó la a)

void leer_eventos(RenderWindow &window){
    Event event = Event();
    while (window.pollEvent(event)){
        if (event.type == Event::Closed){ //si el evento es 'X', cierra ventana
            window.close();
        }
        if(event.type == Event::KeyPressed){
            if (event.key.code == sf::Keyboard::Left){
                diff = {-velocidad,0};
            }
            if (event.key.code == sf::Keyboard::Down){
                diff = {0, velocidad};
            }
            if (event.key.code == sf::Keyboard::Up){
                diff = {0, -velocidad};
            }
            if (event.key.code == sf::Keyboard::Right){
                diff = {velocidad,0};
            }
            if (event.key.code == sf::Keyboard::P){
                pause();
            }
        }
    }
}

