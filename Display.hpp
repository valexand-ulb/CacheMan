#ifndef DISPLAY_HPP
#define DISPLAY_HPP


#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

#include "Entity.hpp"

class Display{

    //setup de la fenetre
    int _largeur = 1080;
    int _longueur = 1920;
    sf::RenderWindow* _window = nullptr;


    //texture
    sf::Texture _background;
    sf::Texture _blockwall;
    sf::Texture _player1;
    sf::Texture _player2;
    sf::Texture _player3;


public:
    //constructeur
    Display() {}
    ~Display() {if (_window != nullptr)delete _window;}
    //partie methode de terminal
    static void display_terminal(int size,int** map, Entity* player1, Entity* ghost1);
    
    //methode window
    //initilisation
    void init_window();
    void loadtexture();

    //affichage
    void display_window(Entity* entities[], int**, int);
    void display_entities(Entity*);
    void display_block(int,int);
    void display_background();

};


#endif