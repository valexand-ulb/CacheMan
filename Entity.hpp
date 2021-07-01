#ifndef ENTITY_HPP
#define ENTITY_HPP
#include "Position.hpp"

#define UP 1
#define DOWN 2
#define RIGHT 3
#define LEFT 4

class Entity
{
protected:
    //attribut de deplacement
    Position* _pos;
    int _direction = 0;
    double _speed;
    //Display
    int _sprite;
    std::string _sprite_terminal = "K";
public:
    // Constructeur
    Entity(double speed, int x, int y ,int sprite): _speed(speed), _sprite(sprite) {_pos = new Position(x,y);}
    // Destructeur
    virtual ~Entity(){delete _pos;}
    // Getter
    double get_speed() const;
    int get_sprite() const;
    int get_direction() const;
    int get_X() const {return _pos->getX();}
    int get_Y() const {return _pos->getY();}
    bool isCoord(int x, int y);
    // Setter
    void set_speed(double new_speed);
    void set_sprite(int new_sprite);
    void set_direction(int new_direction);
    //move. A redefinir en dessous!
    virtual void move(int direction) {return;}
};
#endif
