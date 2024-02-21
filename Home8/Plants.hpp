// Platns.hpp

#pragma once

#ifndef PLANTS_HPP
#define PLANTS_HPP
#include "Harvest.hpp"

// класс растений
class Plants {
public:
	virtual Harvest* CreateHarvest() = 0;
	virtual std::string Name() = 0;
};

// класс яблочных деревьев

class AppleTree :public Plants {
public:
	AppleTree() :name_("AppleTree"), scale_harvest_("Medium"), color_("Red"), number_harves_(10) {

	}
	Harvest* CreateHarvest() override {
		return new Apple;
	}
	std::string Name() override {
		return name_;
	}

private:
	std::string name_; // название растения
	std::string scale_harvest_; // размер плода (большой, маленький, средний)
	std::string color_; // цвет
	int number_harves_; // количество плодов
};


#endif // !PLANTS_HPP
