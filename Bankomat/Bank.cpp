//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Bank.cpp
//  @ Date : 18.12.2016
//  @ Author : 
//
//

#include "stdafx.h"
#include "Bank.h"

bool Bank::wyplata(double ile, int nrKonta) {
	//wyszukaj odpowiedniego konta
	//dokonaj wyp�aty
	Konto* konto = NULL;
	for (int i = 0; i < konta.size(); i++) {
		if (konta[i]->nrKonta == nrKonta) {
			konto = konta[i];
			break;
		}
	}
	if (konto != NULL) return konto->wyplata(ile);
	return false;
}

double Bank::wplata(double ile, int nrKonta) {
	//wyszukaj odpowiedniego konta
	//dokonaj wp�aty
	Konto* konto = NULL;
	for (int i = 0; i < konta.size(); i++) {
		if (konta[i]->nrKonta == nrKonta) {
			konto = konta[i];
			break;
		}
	}
	if (konto != NULL) return konto->wplata(ile);
	return false;
}

double Bank::stanKonta(int nrKonta) {
	Konto* konto = NULL;
	for (int i = 0; i < konta.size(); i++) {
		if (konta[i]->nrKonta == nrKonta) {
			konto = konta[i];
			break;
		}
	}
	if (konto != NULL) return konto->wyswietl_stan();
	return 0;
}

Bank::~Bank(){}

Bank::Bank() {
	//stworz 4 konta, nadaj im stan
	konta.push_back(new Konto(12345, 453.22));
	konta.push_back(new Konto(23451, 12458.00));
	konta.push_back(new Konto(34512, 33.22));
	konta.push_back(new Konto(45123, 1234567));
}

