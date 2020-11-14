#include <SFML/Graphics.hpp>
#include <iostream>
#include "Game.hpp"

#define SCREEN_WIDTH 1024
#define SCREEN_HEIGHT 1024

int main(){
    Sonar::Game(800, 600, "Tic Tac");
    return EXIT_SUCCESS;
}
