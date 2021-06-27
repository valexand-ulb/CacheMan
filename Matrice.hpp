#ifndef MATRICE_HPP
#define MATRICE_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <stdio.h> 
#include <stdlib.h>
#include "Entity.hpp"
#include "Game.hpp"

class Matrice{

int _size;
int** _map;
std::string _file_map;
std::string spawn_person;

public:
    Matrice() noexcept = default;
    Matrice(std::string way_map): _file_map(way_map) {}
    void openingMap();
    void display();
    std::string get_spawn_person();


    
};

#endif