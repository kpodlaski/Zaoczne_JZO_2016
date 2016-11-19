// Klasy.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Person.h"
#include "Car.h"
#include "Truck.h"
#include <iostream>

using namespace std;

void printPerson(Person person) {
	person.surname = "Sir " + person.surname;
	cout << person.name << " " << person.surname << " " <<person.nationality<<endl;
}

void printPerson2(Person & person) {
	person.surname = "Sir " + person.surname;
	cout << person.name << " " << person.surname << " " << person.nationality << endl;
}

void printPerson3(Person * person) {
	person->surname = "Sir " + person->surname;
	cout << person->name << " " << person->surname << " " << person->nationality << endl;
}

int main() {
	Person p("Anna", "Iwan", 780512712548L, 175, "german");
	Car * t = new Truck(p,2012,"Volvo","a333",1500);
	Person * wp = new Person("Tomasz", "Tomaszewski", 
		1221825421L, 170, "polish");
	cout << t->owner.surname<<" "<< t->brand<<" -- "//<<t->load
		<<endl;
	t->soldTo(*wp);
	cout << t->owner.surname << " " << t->brand << " -- "<< endl;
	delete t;
	system("pause");

}

int main2()
{
	Person p;
	p.name = "Helena";
	p.pesel = 82110731234;
	//
	printPerson(p);
	cout << "===============================" << endl;
	cout << p.name << " " << p.surname << endl;
	printPerson2(p);
	cout << "-------------------------------" << endl;
	cout << p.name << " " << p.surname << endl;
	p.nationality = "ukrainian";
	Person p2("Anna", "Iwan", 780512712548L, 175, "german");
	cout << "DRUGA OSOBA" <<endl<<p2.name << " " << p2.pesel<<endl;
	Person * wp = new Person("Tomasz", "Tomaszewski", 1221825421L, 170, "polish");
	printPerson3(wp);
	cout << "-------------------------------" << endl;
	cout << "Trzecia OSOBA" << endl << wp->name << " " << wp->surname << endl;
	//printPerson(*wp);
	//printPerson3(&p);
	delete wp;

	Car car(*wp, 2008, "volvo", "a34");
	car.soldTo(p2);
	cout << car.owner.surname << " " << car.brand << " " << car.version
		<< " rocznik:" << car.year<<endl;

	system("PAUSE");

	
    return 0;
}

