#include "Matrice.hpp"


void Matrice::openingMap(Entity**)
{
    std::ifstream file("Map.txt");
    std::string str; 
    std::getline(file, str);
    const int nb = std::stoi(str);
    size = nb;
    int x = 0;
    map = new int* [nb];
    for (int i=0; i < nb; i++)
        map[i] = new int[nb];
    for (int i = 0; i < nb ; i++){
        std::getline(file, str);
        for (int j = 0 ; j < nb ;j++){
            if (str[j] == '1')map[i][j] = 1;
            //else if (nombre == '\n')continue;
            else map[i][j] = 0;
        }
    }
    return;
}


void Matrice::display(){
    for (int i = 0; i < size ; i++){
        for (int j = 0 ; j < size ;j++){
            if (map[i][j] == 1){std::cout << "X";}
            else if (map[i][j] == 1){std::cout << ".";}
        }
        std::cout << std::endl;
    }
}