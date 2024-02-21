// Harvest.hpp


#pragma once

#ifndef HARVEST_HPP
#define HARVEST_HPP

#include<iostream>

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


#endif // !HARVEST_HPP


