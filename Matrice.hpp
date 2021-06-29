#ifndef MATRICE_HPP
#define MATRICE_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <stdio.h> 
#include <stdlib.h>
#include <vector>

#include "Entity.hpp"
//#include "Game.hpp"

class Matrice{

int _size;
int** _map;
std::string _file_map;
std::vector<std::string> vect_spawn_person;

public:
    Matrice() noexcept = default;
    Matrice(std::string way_map): _file_map(way_map) {openingMap();}
    void openingMap();
    void display();
    void spliter(std::vector<std::string>& vect, std::string str);
    std::string get_spawn_person();


    
};

#endif