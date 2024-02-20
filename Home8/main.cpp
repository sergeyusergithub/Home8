// main.cpp

#include <iostream>


// ����� ������
class Harvest {
public:
	std::string Harvest_name() {
		return harvest_name_;
	};
	void Harvest_name(std::string name) {
		harvest_name_ = name;
	};


private:
	std::string harvest_name_; // �������� �����
	float harvest_weight_;	// ��� �����
	std::string harvest_color_; // ���� �����

};

class Apple :public Harvest {
public:
	Apple() {
		Harvest_name("Apple");
	}
};


// ����� ��������
class Plants {
public:
	virtual Harvest* CreateHarvest() = 0;
};

// ����� ������

class AppleTree :public Plants {
public:
	AppleTree() {

	}
	Harvest* CreateHarvest() override {
		return new Apple;
	}

private:
	std::string scale_harvest_; // ������ ����� (�������, ���������, �������)
	std::string color_; // ����
	int number_harves_; // ���������� ������ 
};




int main() {

	AppleTree Appl1;

	std::cout << Appl1.CreateHarvest()->Harvest_name() << std::endl;






	return 0;
}