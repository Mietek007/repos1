#include "Informatyk.h"
#include "Pracownik.h"

#include <iostream>
#include <string>

using namespace std;


Informatyk::Informatyk(string imie, string nazwisko, int ID)
	:Pracownik(imie,nazwisko,ID)
{
	cout << "cos" << endl;
	stawka = przelicznik*stawka;
	cout << "-> Tworze obiekt(Informatyk)" << licznik << endl;
}

Informatyk::~Informatyk()
{
	cout << "Usuwam informatyka" << endl;
}
