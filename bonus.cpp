#include "bonus.hpp"

// Constructeur
Bonus::Bonus(double speed, int sprite, int speed_up, bool invisibility, bool dash, int wall_breaker, bool freeze_opponent): Entity(speed,0,0, sprite), _speed_up(speed_up), _invisibility(invisibility), _dash(dash), _wall_breaker(wall_breaker), _freeze_opponent(freeze_opponent){}

// Getter
int Bonus::get_speed_up() const {return _speed_up;}
bool Bonus::get_invisibility() const {return _invisibility;}
bool Bonus::get_dash() const {return _dash;}
int Bonus::get_wall_breaker() const {return _wall_breaker;}
bool Bonus::get_freeze_opponent() const {return _freeze_opponent;}

// Setter
void Bonus::set_speed_up(int speed_up) {_speed_up = speed_up;}
void Bonus::set_invisibility(bool invisibility) {_invisibility = invisibility;}
void Bonus::set_dash(bool dash) {_dash = dash;}
void Bonus::set_wall_breaker(int wall_breaker) {_wall_breaker = wall_breaker;}
void Bonus::set_freeze_opponent(bool freeze_opponent) {_freeze_opponent = freeze_opponent;}
