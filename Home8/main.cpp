// main.cpp

#include "Plants.hpp"


int main() {

    //создаем яблочное дерево
	AppleTree ApplTree1;

	std::cout << ApplTree1.CreateHarvest()->Harvest_name() << std::endl;

	int number = ApplTree1.Number();
	while (number != 0){
        std::cout <<"Numbers of harvests are remaining on plants: " << number << std::endl;

        number = ApplTree1.Number();
	}

	std::cout <<"Numbers of harvests are remaining on plants: " << ApplTree1.Number() << std::endl;



	return 0;
}
