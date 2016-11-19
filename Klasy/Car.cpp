#include "stdafx.h"
#include "Car.h"
#include "Person.h"
#include <iostream>

void Car::soldTo(Person person) {
	owner = person;
}

Car::Car(Person _owner, int _year, string _brand, string _version) : owner(_owner), year(_year), brand(_brand), version(_version)
{
	
}

Car::Car()
{
	//cout << "Tworzenie ob. Car" << endl;
}

Car::Car(const Car & car) : owner(car.owner), brand(car.brand), version(car.version), year(car.year)
{

}

Car::~Car()
{
	//cout << "Niszczenie ob. Car"<<endl;
}
