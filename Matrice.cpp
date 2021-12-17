#include "Matrice.hpp"

#define EMPTY 0
#define WALL 1
#define PLAYER 2
#define GHOST 3

void Matrice::openingMap()
{
    std::ifstream file(_file_map);
    //recupere la taille de la map
    std::string str; 
    std::getline(file, str);
    const int nb = std::stoi(str);
    //recupere les endroits de spawn !
    std::string spawn_person;
    std::getline(file, spawn_person);
    spliter(vect_spawn_person, spawn_person);
    _size = nb;
    //int x = 0;
    _map = new int* [nb];
    for (int i=0; i < nb; i++)
        _map[i] = new int[nb];
    for (int i = 0; i < nb ; i++){
        std::getline(file, str);
        for (int j = 0 ; j < nb ;j++){
            if (str[j] == '1')_map[i][j] = 1;
            //else if (nombre == '\n')continue;
            else _map[i][j] = 0;
        }
    }
    return;
}


void Matrice::collision(Entity* player1,Entity* ghost1){
    Display::display_terminal(_size, _map, player1, ghost1);
}


void Matrice::spliter(std::vector<std::string>& vect, std::string str){

	std::string::size_type stTemp = str.find(",");
	
	while(stTemp != std::string::npos)
	{
		vect.push_back(str.substr(0, stTemp));
		str = str.substr(stTemp + 1);
		stTemp = str.find(",");
	}
	
	vect.push_back(str);

	return;
}

void Matrice::spawn_player(int x, int y) {
    _map[x][y] = PLAYER;
}

void Matrice::spawn_ghost(int x, int y) {
    _map[x][y] = GHOST;
}

std::string Matrice::get_spawn_person(){
    //std::cout << "vect_spawn_person.size() = " << vect_spawn_person.size() << std::endl;
    int indice = rand() % vect_spawn_person.size();
    //std::cout << "indice = " << indice << std::endl;
    vect_spawn_person.push_back(vect_spawn_person[indice]);
    vect_spawn_person.erase(vect_spawn_person.begin()+indice);
    //std::cout << "vect_spawn_person.back() = " << vect_spawn_person.back() << std::endl;
    return vect_spawn_person.back();
}