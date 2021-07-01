#include "Matrice.hpp"


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


void Matrice::display(Entity* enti[]){
    for (int i = 0; i < _size ; i++){
        for (int j = 0 ; j < _size ;j++){
            if (_map[i][j] == 1){std::cout << "X";}
            else{
                for (int k = 0 ; k < 11; k++){
                    if (enti[k] != nullptr && enti[k]->isCoord(i,j)){
                        std::cout << enti[k]->get_sprite_terminal();
                        break;
                    }
                    else if (k == 10){std::cout << ".";}
                }
            }
            //else if ()
            //else if (_map[i][j] == 0){std::cout << ".";}
        }
        std::cout << std::endl;
    }
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

std::string Matrice::get_spawn_person(){
    int indice = rand() % vect_spawn_person.size() - 2;
    vect_spawn_person.push_back(vect_spawn_person[indice]);
    vect_spawn_person.erase(vect_spawn_person.begin()+indice);
    return vect_spawn_person.back();
}