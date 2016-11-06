#include "stdafx.h"
#include "Person.h"
#include <iostream>

void Person::changeSurname(string newsurname) {
	surname = newsurname;
}

Person::Person() : name("Jane"), surname("Doe"), nationality("polish"), height(180)
{
	cout << "Tworze obiekt Person " << name << " " << surname << endl;
}

Person::Person(string _name, string _surname, long long _pesel,
	int _height, string _nationality) : name(_name), surname(_surname),
	pesel(_pesel), height(_height), nationality(_nationality)
{
	cout << "Tworze obiekt Person " << name << " " << surname << endl;
}

Person::Person(const Person & p) : name(p.name), surname(p.surname),
pesel(p.pesel), height(p.height), nationality(p.nationality)
{
	cout << "Konstruktor Kopiuj¹cy " << endl;
}
Person::~Person()
{
	cout << "Niszcze obiekt Person " << name << " " << surname << endl;
}
