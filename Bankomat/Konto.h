//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Konto.h
//  @ Date : 18.12.2016
//  @ Author : 
//
//


#if !defined(_KONTO_H)
#define _KONTO_H


class Konto {
public:
	double wplata(double ile);
	bool wyplata(double ile);
	double wyswietl_stan();
private:
	double stan;
};

#endif  //_KONTO_H
