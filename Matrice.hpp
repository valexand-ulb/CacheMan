#ifndef MATRICE_HPP
#define MATRICE_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <stdio.h> 
#include <stdlib.h>
#include <vector>

#include "Display.hpp"
//#include "Game.hpp"

class Matrice{

int _size;
int** _map;
Display* _window = nullptr;
std::string _file_map;
std::vector<std::string> vect_spawn_person;

public:
    Matrice() noexcept = default;
    Matrice(std::string way_map): _file_map(way_map) {openingMap();}
    ~Matrice(){if (_window != nullptr) delete _window;}
    //sert a l'ouverture
    void openingMap();
    void spliter(std::vector<std::string>& vect, std::string str);
    void spawn_player(int x, int y);
    void spawn_ghost(int x, int y);
    //main boucle
    void main();
    void collision(std::vector<Entity*>);
    std::string get_spawn_person();
    int* get_spawn_bonus_coord();


    
};

#endif