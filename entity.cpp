#include "entity.hpp"

//Getter
double Entity::get_speed() const {return _speed;}
int Entity::get_sprite() const {return _sprite;}

// Setter
void Entity::set_speed(double new_speed) {_speed = new_speed;}
void Entity::set_sprite(int new_sprite) {_sprite = new_sprite;}
