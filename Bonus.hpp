#ifndef BONUS_HPP
#define BONUS_HPP


#include "Entity.hpp"

class Bonus : public Entity
{
private:
    int _speed_up = 0; // peut augmenter la vitesse
    bool _invisibility = false; // peut être invisible
    bool _dash = false; // peut dash à travers un mur
    int _wall_breaker = 0; // peut casser un certain nombre de mur
    bool _freeze_opponent = false;  // peut freeze l'adversaire
public:
    // Constructeur
    Bonus(double speed, int sprite, int speed_up, bool invisibility, bool dash, int wall_breaker, bool freeze_opponent);
    // Destructeur
    virtual ~Bonus(){}
    // Getter
    int get_speed_up() const;
    bool get_invisibility() const;
    bool get_dash() const;
    int get_wall_breaker() const;
    bool get_freeze_opponent() const;
    // Setter
    void set_speed_up(int speed);
    void set_invisibility(bool invisibility);
    void set_dash(bool dash);
    void set_wall_breaker(int wall_breaker);
    void set_freeze_opponent(bool freeze_opponent);
    //move a mettre ?
    void move(int direction) override{}
};

#endif
