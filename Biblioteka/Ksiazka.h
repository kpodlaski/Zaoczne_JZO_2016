//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Ksiazka.h
//  @ Date : 11.12.2016
//  @ Author : 
//
//


#if !defined(_KSIAZKA_H)
#define _KSIAZKA_H

#include "ElementKatalogowy.h"
#include "Autor.h"
#include <string>

using namespace std;


class Ksiazka : public ElementKatalogowy {
public:
	string tytul;
	string opis();
	string szczegolowypis();
	Autor *autorzy;
};

#endif  //_KSIAZKA_H
