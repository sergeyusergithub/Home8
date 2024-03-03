// Harvest.hpp
#pragma once

#ifndef HARVEST_HPP
#define HARVEST_HPP

#include<iostream>

// класс плодов является базовым классом

class Harvest {
public:
    // метод для получения имени плода
	std::string Harvest_name() {
		return harvest_name_;
	};
	// метод для задания имени плода
	void Harvest_name(std::string name) {
		harvest_name_ = name;
	};

    // метод для получения веса плода
	double Harvest_weight(){
        return harvest_weight_;
	}

	// метод для задания веса плода
	void Harvest_weight(double weight){
        harvest_weight_ = weight;
	}

    // метод для получения цвета плода
	std::string Harvest_color() {
		return harvest_color_;
	};

	// метод для задания цвета плода
	void Harvest_color(std::string color) {
		harvest_color_ = color;
	};


private:
	std::string harvest_name_; // название плода
	double harvest_weight_;	// вес плода
	std::string harvest_color_; // цвет плода

};

// класс Яблоко, наследник класса плод
class Apple :public Harvest {
public:

    // конструктор по умолчанию, создается по умолчанию яблоко с определенными параметрами
	Apple() {
		Harvest_name("Apple");
		Harvest_weight(150.0);
		Harvest_color("Green");
		harvest_type_ = "Fruit";
	}

    // метод для получения типа плода
	std::string Harvest_type() {
		return harvest_type_;
	};
	~Apple(){

    }

private:
    std::string harvest_type_; //тип плода

};

// класс Малина, наследник класса плод
class Raspberry :public Harvest {
public:

	// конструктор по умолчанию, создается по умолчанию яблоко с определенными параметрами
	Raspberry() {
		Harvest_name("Raspberry");
		Harvest_weight(1.0);
		Harvest_color("Red");
		harvest_type_ = "Berry";
	}

	// метод для получения типа плода
	std::string Harvest_type() {
		return harvest_type_;
	};
	~Raspberry() {

	}

private:
	std::string harvest_type_; //тип плода

};


#endif // !HARVEST_HPP

