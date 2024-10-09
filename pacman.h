#define pacman
#include "sfml-utn-inspt.h"

const unsigned int ANCHO_VENT = 1366;
const unsigned int ALTO_VENT = 768;
const unsigned int FRAMERATE = 60;
const float velocidad = 3.f;
RenderWindow ventana = RenderWindow({ANCHO_VENT, ALTO_VENT}, "Unidad 1 - Taller de Videojuegos");

void leer_eventos(RenderWindow &window);

void playpacman(){
    ventana.setFramerateLimit(FRAMERATE);
    CircleShape cir = CircleShape(25);
    Vector2f diff = {0,0};

    while (ventana.isOpen()) {
        leer_eventos(ventana);
        ventana.clear();
        ventana.draw(cir);
        ventana.display();
        cir.move(diff);
        if (lengthTracker >= 180){
            if (diff.x < 0 && diff.y > 0){
                diff.y = -velocidad;
            } else if (diff.x < 0 && diff.y < 0){
                diff.x = velocidad;
            } else if (diff.x > 0 && diff.y < 0){
                diff.y = velocidad;
            } else {
                diff.x = -velocidad;
            }
        }
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
            if (Event::KeyPressed == Keyboard::Left){

            }
            if (Event::KeyPressed == Keyboard::Down){
                
            }
            if (Event::KeyPressed == Keyboard::Up){
                
            }
            if (Event::KeyPressed == Keyboard::Right){
                
            }
        }
    }
}

