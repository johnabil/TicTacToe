//
//  InputManager.hpp
//  tictac
//
//  Created by John Nabil Takla on 14/11/2020.
//
#pragma once
#include <SFML/Graphics.hpp>

namespace Sonar
{
class InputManager
{
public:
    InputManager(){};
    ~InputManager(){};
    
    bool IsSpriteClicked(sf::Sprite object, sf::Mouse::Button button, sf::RenderWindow &window);
    sf::Vector2i GetMousePosition(sf::RenderWindow &window);
};
}
