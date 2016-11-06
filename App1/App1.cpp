// App1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "iostream"

using namespace std;
long silnia(long s) {
	long r = 1;
	for (long a = 1; a <= s; a++) {
		r = r*a;
	}
	return r;
}
int main()
{
	const int size = 10;
	long t[size];
	for (int a = 0; a < size; a++) {
		t[a] = 10 + a;
	}
	for (int a = 0; a < size; a++) {
		t[a] = silnia(t[a] / 2);
	}
	int a = 0;
	while(a<size)
	{
		if (a == 5) cout << "cos";
		cout << a<< ":"<<t[a] << endl; 
		
		a++;
	}
	//sqrt(12);

	long *wl;
	wl = t;

	cout << *(wl + 5) << endl;
	cout << (wl + 5) << endl;

	wl = new long;
	//wl = new long;
	//wl = new long;
	//wl = new long[5];
	cout << wl << " : " << *wl;
	delete wl;
	wl = t;

	char c = 'a';
	char text[] = "Ala ma kota";
	int len = strlen(text);
	for (int a = 0; a < len; a++) {
		cout << text[a];
	}
	//text + " i psa";

	system("pause");
	return 0;
}

