#include "Game.hpp"
#include <sstream>

void Game::initGame(){

    
    map = new Matrice("Map/level1.txt");
    std::string posi = map->get_spawn_person();

    std::stringstream strValue;
    strValue << posi[0];

    unsigned int x;
    strValue >> x;

    strValue << posi[2];

    unsigned int y;
    strValue >> y;

    player1 = new Player(50, x, y,0);

    posi = map->get_spawn_person();
    strValue << posi[0];

    strValue >> x;

    strValue << posi[2];

    strValue >> y;
    ghost1 = new Ghost(50,x,y,1);
    mainBoucle();
    delete player1;
    delete ghost1;
    return;
}


void Game::mainBoucle(){


}