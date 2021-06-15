class Entity
{
private:
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
    // Setter
    void set_speed(double new_speed);
    void set_sprite(int new_sprite);
};
