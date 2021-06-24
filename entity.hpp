#ifndef ENTITY_HPP
#define ENTITY_HPP


#define UP 1
#define DOWN 2
#define RIGHT 3
#define LEFT 4

class Entity
{
private:
    int _direction = 0;
    double _speed;
    int _sprite;
public:
    // Constructeur
    Entity(double speed, int sprite): _speed(speed), _sprite(sprite) {}
    // Destructeur
    ~Entity(){};
    // Getter
    double get_speed() const;
    int get_sprite() const;
    int get_direction() const;
    // Setter
    void set_speed(double new_speed);
    void set_sprite(int new_sprite);
    void set_direction(int new_direction);
    //move. A redefinir en dessous!
    virtual void move(int direction);
};
#endif