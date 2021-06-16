#ifndef MATRICE_HPP
#define MATRICE_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <stdio.h> 
#include <stdlib.h>
#include "entity.hpp"

class Matrice{

int size;
int** map;

public:
    Matrice() noexcept = default;
    void openingMap(Entity**);
    void display();



    
};

#endif