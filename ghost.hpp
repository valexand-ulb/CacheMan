#ifndef GHOST_HPP
#define GHOST_HPP

#include "Person.hpp"

class Ghost : public Person
{
private:
    
public:
    // Constructeur
    Ghost(double speed, int sprite);
    // Destructeur
    virtual ~Ghost(){};
};

#endif