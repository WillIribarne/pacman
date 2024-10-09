#include "sfml-utn-inspt.h"
#include "window.hpp"
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

void pause(){

}