//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Ksiazka.cpp
//  @ Date : 11.12.2016
//  @ Author : 
//
//

#include "stdafx.h"
#include "Ksiazka.h"

string Ksiazka::opis() {
	string _opis = "Ksiazka";
	_opis.append(autorzy[0].imie);
	return _opis + autorzy[0].nazwisko + " " + tytul;
}

string Ksiazka::szczegolowypis() {
	return "Wi�kszy opis ksia�ki";
}

Ksiazka::Ksiazka(Autor * _autorzy, string _tytul) 
	: autorzy(_autorzy), tytul(_tytul)

{

}

