// Plants.hpp
#ifndef PLANTS_HPP
#define PLANTS_HPP

#include "Harvest.hpp"
#include <iostream>

// абстрактный базовый класс для растений
class Plants {
public:
    // виртуальный фабричный метод для создания плода, конкретного потомка растения
	virtual Harvest* CreateHarvest() = 0;

	// виртуальный метод получения имени класса растения
	virtual std::string Name()=0;

	// виртуальный метод получения размера плода
	virtual std::string Scale() = 0;

	// виртуальный метод получения количества плодов
	virtual int Number() = 0;
};

// класс яблочное деревьево
class AppleTree :public Plants {
public:

    // конструктор по умолчанию
	AppleTree():AppleTree(10){}

	// конструктор с параметром
	AppleTree(int numb):name_("AppleTree"),scale_harvest_("Medium"),
        number_harves_(numb),type_("Tree"){	}

	// данный метод возвращает указатель на объект плод яблоко
	Harvest* CreateHarvest() override {
		return new Apple;
	}

	// метод получения названия растения
	std::string Name() override {
		return name_;
	}

    // метод получения размеров плодов растения
	std::string Scale() override {
        return scale_harvest_;
    }

    // метод получения количества плодов у данного растения
    // причем, после того как было получено количество плодов
    // один плод срывается
    int Number() override {
        if (number_harves_ == 0){
            return 0;
        }
        return number_harves_--;
    }

    // метод возвращающий тип растения
    std::string Type() {
        return type_;
    }

private:
    std::string name_; // название растения
	std::string scale_harvest_; // размер плода (большой, маленький, средний)
	int number_harves_; // количество плодов
    std::string type_; // тип растения

};



// класс яблочное деревьево
class RaspberryBush :public Plants {
public:

    // конструктор по умолчанию
    RaspberryBush() :RaspberryBush(102) {}

    // конструктор с параметром
    RaspberryBush(int numb) :name_("RaspberryBush"), scale_harvest_("Small"),
        number_harves_(numb), type_("Bush") {	}

    // данный метод возвращает указатель на объект плод яблоко
    Harvest* CreateHarvest() override {
        return new Raspberry;
    }

    // метод получения названия растения
    std::string Name() override {
        return name_;
    }

    // метод получения размеров плодов растения
    std::string Scale() override {
        return scale_harvest_;
    }

    // метод получения количества плодов у данного растения
    // причем, после того как было получено количество плодов
    // один плод срывается
    int Number() override {
        if (number_harves_ == 0) {
            return 0;
        }
        return number_harves_--;
    }

    // метод возвращающий тип растения
    std::string Type() {
        return type_;
    }

private:
    std::string name_; // название растения
    std::string scale_harvest_; // размер плода (большой, маленький, средний)
    int number_harves_; // количество плодов
    std::string type_; // тип растения

};




#endif // PLANTS_HPP


