#pragma once

#include <string>

using namespace std;

class Person
{
public:
	string name;
	string surname;
	long long pesel;
	int height;
	string nationality;
	void changeSurname(string newsurname);

	Person();
	Person(string _name, string _surname, long long _pesel,
		int _height, string _nationality);
	Person(const Person & person);
	~Person();
};

