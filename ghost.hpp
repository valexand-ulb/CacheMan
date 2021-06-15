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
