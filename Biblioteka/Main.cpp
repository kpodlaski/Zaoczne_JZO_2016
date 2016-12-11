// Biblioteka.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Biblioteka.h"



int main()
{
	Biblioteka* biblioteka = new Biblioteka();
	Personel* personel = new Personel();
	Klient* klient = new Klient();
	//Tworze kilka ksi¹zek;
	//Test wypozyczenia ksi¹zki
	biblioteka->wypozyczenie(biblioteka->katalog[5], *klient, *personel);
    return 0;
}

