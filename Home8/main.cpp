// main.cpp

#include <iostream>


// класс плодов
class Harvest {
public:
	std::string Harvest_name() {
		return harvest_name_;
	};
	void Harvest_name(std::string name) {
		harvest_name_ = name;
	};


private:
	std::string harvest_name_; // название плода
	float harvest_weight_;	// вес плода
	std::string harvest_color_; // цвет плода

};

class Apple :public Harvest {
public:
	Apple() {
		Harvest_name("Apple");
	}
};


// класс растений
class Plants {
public:
	virtual Harvest* CreateHarvest() = 0;
};

// класс яблоки

class AppleTree :public Plants {
public:
	AppleTree() {

	}
	Harvest* CreateHarvest() override {
		return new Apple;
	}

private:
	std::string scale_harvest_; // размер плода (большой, маленький, средний)
	std::string color_; // цвет
	int number_harves_; // количество плодов 
};




int main() {

	AppleTree Appl1;

	std::cout << Appl1.CreateHarvest()->Harvest_name() << std::endl;






	return 0;
}