#include "Game.hpp"
#include <SFML/Window/Keyboard.hpp>
#include <unistd.h>
#include <vector>


#define EMPTY 0
#define WALL 1
#define PLAYER 2
#define GHOST 3

void Game::initGame(){
    for (int i = 0; i < 10; i++)entity[i]=nullptr;
    
    map = new Matrice("Map/level2.txt");

    std::string posi = map->get_spawn_person();
    //std::cout << "posi = " << posi << std::endl;
    std::string chiffres = "1234567890";
    std::string number = "";
    char space = ' ';
    int i = 0;
    for ( i; i < posi.length(); i++) {
        if (posi[i] == space) {
            break;
        }
        for (int j = 0; j < chiffres.length(); j++){
            //std::cout << "posi[i] = " << posi[i] << " et chiffres[j] = " << chiffres[j] << std::endl;
            if (posi[i] == chiffres[j]) {
                number = number + posi[i];
            }
        }
    }
    //std::cout << "number = " << number << std::endl;
    unsigned int x1 = stoi(number);
    //std::cout << "new x1 = " << x1 << std::endl;

    number = "";
    for ( i; i < posi.length(); i++) {
        for (int j = 0; j < chiffres.length(); j++){
            //std::cout << "posi[i] = " << posi[i] << " et chiffres[j] = " << chiffres[j] << std::endl;
            if (posi[i] == chiffres[j]) {
                number = number + posi[i];
            }
        }
    }
    //std::cout << "number2 = " << number << std::endl;
    unsigned int y1 = stoi(number);
    //std::cout << "new y1 = " << y1 << std::endl;

    player1 = new Player(1, x1, y1,0);
    //std::cout << "x1 = " << x1 << " et y1 = " << y1 << std::endl;
    //map->spawn_player(x1, y1);
    number = "";
    posi = map->get_spawn_person();
    int k = 0;
    for (k; k < posi.length(); k++) {
        if (posi[k] == space) {
            break;
        }
        for (int l = 0; l< chiffres.length(); l++) {
            if (posi[k] == chiffres[l]) {
                number = number + posi[k];
            }
        }
    }
    //std::cout << "number = " << number << std::endl;
    unsigned int x2 = stoi(number);
    //std::cout << "x2 = " << x2 << std::endl;
    
    number = "";
    for (k; k < posi.length(); k++) {
        for (int l = 0; l< chiffres.length(); l++) {
            if (posi[k] == chiffres[l]) {
                number = number + posi[k];
            }
        }
    }
    //std::cout << "number2 = " << number << std::endl;
    unsigned int y2 = stoi(number);
    ghost1 = new Ghost(1, x2, y2,1);
    //map->spawn_ghost(x2, y2);

    //put entities in the arrow
    entity[0] = player1;
    entity[1] = ghost1;

    mainBoucle();
    delete player1;
    delete ghost1;
    return;
}


void Game::key_input(){

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Z))
{
    player1->set_direction(UP);
}
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
{
    player1->set_direction(DOWN);
}
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Q))
{
    player1->set_direction(LEFT);
}
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
{
    player1->set_direction(RIGHT);
}
    

}


void Game::key_input_ghost(){ // temporaire, pour le reseau

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
{
    ghost1->set_direction(UP);
}
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
{
    ghost1->set_direction(DOWN);
}
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
{
    ghost1->set_direction(LEFT);
}
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
{
    ghost1->set_direction(RIGHT);
}
    

}

void Game::move(){
    player1->move(player1->get_direction());
    ghost1->move(ghost1->get_direction());
    std::cout << player1->get_direction() << std::endl;
}

void Game::getcoord(){
    int tableau[3][3];
    tableau[0][0] = PLAYER;
    tableau[0][1] = player1->get_X();
    tableau[0][2] = player1->get_Y();
    tableau[1][0] = GHOST;
    tableau[1][1] = ghost1->get_X();
    tableau[1][2] = ghost1->get_Y();
}



void Game::mainBoucle(){
    bool playing_game = true;
    std::vector<Entity*> entitiesvector = {player1,ghost1};
    while (playing_game){
        Game::key_input();
        Game::key_input_ghost();
        Game::move();
        // int tableau[3][3];
        // tableau[0][0] = PLAYER;
        // tableau[0][1] = player1->get_X();
        // tableau[0][2] = player1->get_Y();
        // tableau[1][0] = GHOST;
        // tableau[1][1] = ghost1->get_X();
        // tableau[1][2] = ghost1->get_Y();

        //###############SPAWN BONUS #######################
        if (false){// A voir ce qu'on trouvera comme idee proba de spawn
            int* tableau = map->get_spawn_bonus_coord();
            //on devrait predefinir des bonus, a faire aussi
            entitiesvector.push_back(new Bonus(0,1,0.2,false,false,1,false,false));
        }
        std::cout << "ca display !" << std::endl;
        map->collision(entitiesvector);
        usleep(500000); //1 000 000 = 1 seconde
    }
}