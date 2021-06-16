#ifndef GAME_HPP
#define GAME_HPP
#include "entity.hpp"

class Game{
/*
    Classe principale qui coordonne tout
*/
    static const int sizeMax = 10;//taille du vecteur
    int size=0;
    Entity(* entity)[sizeMax]; 


public:
    //constructeur
    Game() noexcept = default;

    //fonction
    void initGame(); //creation des entites de bases
    void mainBoucle();




};




#endif