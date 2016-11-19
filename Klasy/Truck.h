#pragma once
#include "Car.h"
class Truck : public Car
{
public:
	int load;
	Truck();
	Truck(Person _owner, int _year, 
		  string _brand, string _version, int _load);
	~Truck();
};

