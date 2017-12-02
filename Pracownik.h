#ifndef PRACOWNIK_H
#define PRACOWNIK_H

#include <iostream>
#include <string>

using namespace std;

class Pracownik
{
protected:
	int ID;
	static int iiD;
	static int licznik;
	int stawka = 10;
	string imie = "";
	string nazwisko = "";
public:
	void wypisz();
	void wpisz();
	Pracownik(string imie = "Jan", string nazwisko = "Kowalski", int ID = 1234);
	virtual ~Pracownik();
};

#endif PRACOWNIK_H