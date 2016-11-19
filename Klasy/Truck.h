#pragma once
#include "Car.h"
class Truck : public Car
{
public:
	int load;

	void soldTo(Person p);

	Truck();
	Truck(Person _owner, int _year, 
		  string _brand, string _version, int _load);
	virtual ~Truck();
};

