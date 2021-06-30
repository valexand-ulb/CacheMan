#ifndef GHOST_HPP
#define GHOST_HPP

#include "Person.hpp"

class Ghost : public Person
{
private:
    
public:
    // Constructeur
    Ghost(double speed, int sprite):Person(speed
    ,0,0,sprite){}
    Ghost(double speed,int x, int y, int sprite):Person(speed
    ,x,y,sprite){}
    // Destructeur
    virtual ~Ghost(){};
};

#endif