#ifndef GHOST_HPP
#define GHOST_HPP

#include "entity.hpp"

class Ghost : public Entity
{
private:
    
public:
    // Constructeur
    Ghost(double speed, int sprite);
    // Destructeur
    virtual ~Ghost(){};
};

#endif