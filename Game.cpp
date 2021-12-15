#include "Game.hpp"
#include <SFML/Window/Keyboard.hpp>

void Game::initGame(){
    for (int i = 0; i < 10; i++)entity[i]=nullptr;
    
    map = new Matrice("Map/level1.txt");

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

    player1 = new Player(50, x1, y1,0);
    //std::cout << "x1 = " << x1 << " et y1 = " << y1 << std::endl;
    map->spawn_player(x1, y1);
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
    ghost1 = new Ghost(50, x2, y2,1);
    map->spawn_ghost(x2, y2);

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

void Game::move(){
    player1->move(player1->get_direction());
    std::cout << player1->get_direction() << std::endl;
}


void Game::mainBoucle(){
    bool playing_game = true;
    while (playing_game){
        Game::key_input();
        Game::move();
        map->display(entity);
    }
}