#include "sfml-utn-inspt.h"
#include "playerValues.hpp"

void read_events(RenderWindow &window, Pacman *pacmanito);
void pause();

void read_events(RenderWindow &window, Pacman *pacmanito){
    Event event = Event();
    while (window.pollEvent(event)){
        if (event.type == Event::Closed){ //si el evento es 'X', cierra ventana
            window.close();
        }
        if(event.type == Event::KeyPressed){
            if (event.key.code == Keyboard::Left){
                (*pacmanito).setMovement({-(*pacmanito).getSpeed(),0});
            }
            if (event.key.code == Keyboard::Down){
                (*pacmanito).setMovement({0, (*pacmanito).getSpeed()});
            }
            if (event.key.code == Keyboard::Up){
                (*pacmanito).setMovement({0, -(*pacmanito).getSpeed()});
            }
            if (event.key.code == Keyboard::Right){
                (*pacmanito).setMovement({(*pacmanito).getSpeed(),0});
            }
            if (event.key.code == Keyboard::P){
                pause();
            }
        }
    }
}

void pause(){

}