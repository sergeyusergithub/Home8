// main.cpp

#include "Plants.hpp"


int main() {

    // создаем яблочное дерево с плодами
	AppleTree ApplTree1;

	// создаем малиновый куст с плодами
	RaspberryBush RaspBush1;

	// проверяем название плодов, которые растут на яблочном дереве
	std::cout << "Our fruit is: " << ApplTree1.CreateHarvest()->Harvest_name() << std::endl;

	int number = ApplTree1.Number();

	// собираем плоды с яблочного дерева
	while (number != 0){
        std::cout <<"Numbers of harvests are remaining on plants: " << number << std::endl;

        number = ApplTree1.Number();
	}

	// пробуем собрать плоды с пустого дерева
	std::cout <<"Numbers of harvests are remaining on plants: " << ApplTree1.Number() << std::endl;

	std::cout << std::endl;

	// проверяем название плодов, которые растут на малиновом кусте
	std::cout << "Our berry is: " << RaspBush1.CreateHarvest()->Harvest_name() << std::endl;

	// собирем некоторое количество плодов с куста малины
	number = RaspBush1.Number();

	while (number > 80) {
		std::cout << "Numbers of harvests are remaining on plants: " << number << std::endl;

		number = RaspBush1.Number();
	}

	// узнаем цвет нашей ягоды
	std::cout << "Color of berry is: " << RaspBush1.CreateHarvest()->Harvest_color() << std::endl;
	
	// вес нашей ягоды
	std::cout << "Weight of berry is: " << RaspBush1.CreateHarvest()->Harvest_weight() << std::endl;

	return 0;
}
