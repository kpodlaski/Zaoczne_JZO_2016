#include "stdafx.h"
#include "Truck.h"
#include "Person.h"
#include <iostream>

void Truck::soldTo(Person p) {
	cout << "Sprzedano Truck"<<endl;
	Car::soldTo(p);
	brand = " new brand";
	protectedField = 12;
	cout << protectedField << endl;
	//privateField = 3;
}

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
