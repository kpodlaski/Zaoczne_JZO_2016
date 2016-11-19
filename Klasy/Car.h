#pragma once
#include "Person.h"
#include <string>

using namespace std;
class Car
{
public:
	Person owner;
	int year;
	string brand;
	string version;

	virtual void soldTo(Person p);

	Car();
	Car(const  Car & _car);
	Car(Person _owner, int _year, string _brand, string _version);
	virtual ~Car();
private:
	int privateField;
protected:
	int protectedField;
};

