#include "Entity.hpp"

//Getter
double Entity::get_speed() const {return _speed;}
int Entity::get_sprite() const {return _sprite;}
int Entity::get_direction() const { return _direction;}

// Setter
void Entity::set_speed(double new_speed) {_speed = new_speed;}
void Entity::set_sprite(int new_sprite) {_sprite = new_sprite;}
void Entity::set_direction(int new_direction){_direction = new_direction;}


bool Entity::isCoord(int x, int y){
    std::cout << get_X() << " et " << get_Y() << std::endl;
    if (get_X() == x and get_Y() == y){
        return true;
    }
    else return false;
}