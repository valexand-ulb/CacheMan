#include "entity.hpp"

class Player : public Entity
{
private:

public:
    // Constructeur
    Player(double speed, int sprite);
    // Destructeur
    virtual ~Player(){};
};
