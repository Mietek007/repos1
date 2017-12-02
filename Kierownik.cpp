#include "Kierownik.h"
#include "Pracownik.h"

#include <iostream>
#include <string>

using namespace std;

Kierownik::Kierownik(string imie, string nazwisko, int ID)
	:Pracownik(imie, nazwisko, ID)
{
	stawka = przelicznik*stawka;
	cout << "-> Tworze obiekt(Kierownik)" <<licznik<< endl;
}

Kierownik::~Kierownik()
{
	cout << "Usuwam kierownika" << endl;
}
