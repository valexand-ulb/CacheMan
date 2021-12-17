#ifndef GAME_HPP
#define GAME_HPP
#include "Player.hpp"
#include "Ghost.hpp"
#include "Matrice.hpp"
#include <string>

class Game{
/*
    Classe principale qui coordonne tout
*/
    static const int sizeMax = 10;//taille du vecteur
    int size=0;
    Entity* entity[sizeMax]; 

    //entity
    Entity* player1;
    Entity* ghost1;
    Matrice* map;

public:
    //constructeur
    Game() noexcept = default;

    //fonction
    void print(){
        //map->display(entity);
    }
    void initGame(); //creation des entites de bases
    void mainBoucle();
    void key_input();
    void move();
    int getcoord();



};




#endif