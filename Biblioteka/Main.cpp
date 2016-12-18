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
	//Tworze kilka ksi¹zek;
	Autor autorzy[1];
	autorzy[0] = Autor("Juliusz", "S³owacki");
	string tytul = "Balladyna";
	Ksiazka* k = new Ksiazka(autorzy, tytul);
	biblioteka->zakup(*k, *personel);
	//Test wypozyczenia ksi¹zki
	biblioteka->wypozyczenie(biblioteka->katalog[1], *klient, *personel);
    return 0;
}

