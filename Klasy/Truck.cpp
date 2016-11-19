#include "stdafx.h"
#include "Truck.h"
#include <iostream>


Truck::Truck()
{
	//cout << "Tworzenie ob. Truck" << endl;
}

Truck::Truck(Person _owner, int _year,
	string _brand, string _version, int _load) : 
	Car(_owner,_year,_brand,_version), load(_load)
{

}
Truck::~Truck()
{
	//cout << "Niszczenie ob. Truck" << endl;
}
