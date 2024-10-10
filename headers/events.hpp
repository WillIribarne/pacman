#include "sfml-utn-inspt.h"
#include "playerValues.hpp"

void leer_eventos(RenderWindow &window);
void pause();

void leer_eventos(RenderWindow &window){
    Event event = Event();
    while (window.pollEvent(event)){
        if (event.type == Event::Closed){ //si el evento es 'X', cierra ventana
            window.close();
        }
        if(event.type == Event::KeyPressed){
            if (event.key.code == Keyboard::Left){
                diff = {-velocidad,0};
            }
            if (event.key.code == Keyboard::Down){
                diff = {0, velocidad};
            }
            if (event.key.code == Keyboard::Up){
                diff = {0, -velocidad};
            }
            if (event.key.code == Keyboard::Right){
                diff = {velocidad,0};
            }
            if (event.key.code == Keyboard::P){
                pause();
            }
        }
    }
}

void pause(){

}