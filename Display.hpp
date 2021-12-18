#ifndef DISPLAY_HPP
#define DISPLAY_HPP


#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

#include "Entity.hpp"

class Display{
    sf::RenderWindow* _window = nullptr;


public:
    //constructeur
    Display() noexcept = default;
    ~Display() {if (_window != nullptr)delete _window;}
    //partie methode de terminal
    static void display_terminal(int size,int** map, Entity* player1, Entity* ghost1);
    
    //methode window
    void init_window();
    void display_window();//Entity* entities[]);


};


#endif