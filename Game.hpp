#ifndef GAME_HPP
#define GAME_HPP
#include "player.hpp"
#include "ghost.hpp"

class Game{
/*
    Classe principale qui coordonne tout
*/
    static const int sizeMax = 10;//taille du vecteur
    int size=0;
    Entity(* entity)[sizeMax]; 

    //entity
    Player* player;
    Ghost* ghost1;
    Ghost* ghost2;
    Ghost* ghost3;
    Ghost* ghost4;


public:
    //constructeur
    Game() noexcept = default;

    //fonction
    void initGame(); //creation des entites de bases
    void mainBoucle();




};




#endif