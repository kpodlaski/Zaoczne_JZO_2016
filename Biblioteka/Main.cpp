// Biblioteka.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Biblioteka.h"
#include "Autor.h"
#include "Ksiazka.h"



int main()
{
	Biblioteka* biblioteka = new Biblioteka();
	Personel* personel = new Personel("Tamara","Tomaszewska");
	Klient* klient = new Klient("Adam","Kowalski");
	//Tworze kilka ksi�zek;
	Autor autorzy[1];
	autorzy[0] = Autor("Juliusz", "S�owacki");
	string tytul = "Balladyna";
	Ksiazka* k = new Ksiazka(autorzy, tytul);
	biblioteka->zakup(*k, *personel);
	//Test wypozyczenia ksi�zki
	biblioteka->wypozyczenie(biblioteka->katalog[1], *klient, *personel);
    return 0;
}

