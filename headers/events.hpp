#include "sfml-utn-inspt.h"
#include "playerValues.hpp"

void read_events(RenderWindow &window);

void read_events(RenderWindow &window){
    Event event = Event();
    while (window.pollEvent(event)){
        if (event.type == Event::Closed){ //si el evento es 'X', cierra ventana
            window.close();
        }
        if(event.type == Event::KeyPressed){
            if (event.key.code == Keyboard::Left){
                pacmanMove = {-speed,0};
            }
            if (event.key.code == Keyboard::Down){
                pacmanMove = {0, speed};
            }
            if (event.key.code == Keyboard::Up){
                pacmanMove = {0, -speed};
            }
            if (event.key.code == Keyboard::Right){
                pacmanMove = {speed,0};
            }
            if (event.key.code == Keyboard::P){
                //pause();
            }
        }
    }
}