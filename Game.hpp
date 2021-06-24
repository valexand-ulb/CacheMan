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
    Entity* player;
    Entity* IA1;
    Entity* IA2;
    Entity* IA3;
    Entity* IA4;


public:
    //constructeur
    Game() noexcept = default;

    //fonction
    void initGame(); //creation des entites de bases
    void mainBoucle();




};




#endif