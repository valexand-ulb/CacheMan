#include "Variable.hpp"
#include "Display.hpp"


#define EMPTY 0
#define WALL 1
#define PLAYER 2
#define GHOST 3


void Display::display_terminal(int size,int** map, Entity* player1, Entity* ghost1){
    //std::system("clear");
    for (int i = 0; i < size ; i++){
        for (int j = 0 ; j < size ;j++){
            if (map[i][j] == WALL){std::cout << "X";} 
            else if (player1->get_X() == i and player1->get_Y() == j) 
            {std::cout << "O";}
            else if (ghost1->get_X() == i and ghost1->get_Y() == j) 
            {std::cout << "&";}
            else if (map[i][j] == EMPTY){std::cout << ".";}
        }
        std::cout << std::endl;
    }
}


//methode window

void Display::init_window(){
    _window = new sf::RenderWindow(sf::VideoMode(_largeur,_longueur), "Cache man", sf::Style::Close);

    loadtexture();
    sf::Sprite background;
    background.setTexture(_background);
    background.setScale(1.2,2);
    _window->draw(background);
    _window->display();
}


void Display::loadtexture(){
    _background.loadFromFile("Texture/background.jpg");
    _blockwall.loadFromFile("Texture/blockwall.jpg");
    _player1.loadFromFile("Texture/pacman.jpg");
    _player2.loadFromFile("Texture/redghost.jpg");
    _player3.loadFromFile("Texture/yellowghost.jpg");
}

void Display::display_window(std::vector<Entity*> entities, int** map,int size){

    sf::Event event;
    while (this->_window->pollEvent(event))
        {
            if (event.type == sf::Event::Closed) this->_window->close();
            //if (event.type == sf::Event::GainedFocus) this->_focused = true;
            //if (event.type == sf::Event::LostFocus) this->_focused = false;
        }
    display_background();
    for (int i = 0; i <size; i++){
        for (int j = 0; j <size; j++){
            if (map[i][j] == 1){
                display_block(i,j);
            }
        }
    }
    for (int i = 0; i < entities.size(); i++){
        display_entities(entities[i]);
    }
    _window->display();
    /***
     * Voir ce qu'on va utiliser mais je pense SFML
     * ***/
}

void Display::display_background(){
    sf::Sprite background;
    background.setTexture(_background);
    background.setScale(1.2,2);
    _window->draw(background);
}

void Display::display_entities(Entity* entity){
    sf::Sprite sprite;
    sprite.setTexture(_player1);
    sprite.setScale(0.1,0.1);
    sprite.setPosition(entity->get_X()*50, entity->get_Y()*50);
    _window->draw(sprite);

}


void Display::display_block(int x, int y){
    sf::Sprite sprite;
    sprite.setTexture(_blockwall);
    sprite.setScale(0.1,0.1);
    sprite.setPosition(x*40,y*40);
    _window->draw(sprite);
}