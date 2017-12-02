#include "Pracownik.h"

#include <string>
#include <iostream>

using namespace std;

void Pracownik::wypisz()
{
	cout << endl << endl;
	cout << "imie: " << imie << endl;
	cout << "nazwisko: " << nazwisko << endl;
	cout << "ID: " << ID<<endl;
	cout <<"stawka: "<< stawka << endl;
}

void Pracownik::wpisz()
{
	cout << "Podaj imie pracownika" << endl;
	cin >> imie;
	cout << "Podaj nazwisko pracownika" << endl;
	cin >> nazwisko;
	cout << "Podaj ID" << endl;
	cin >> ID;
	

}

Pracownik::Pracownik(string imie, string nazwisko, int ID)
{
	this->imie = imie;
	this->nazwisko = nazwisko;
	licznik++;
	iiD++;
	this->ID = ID;
	cout << "Tworze obiekt(pracownik)" << licznik<<endl;
	iiD++;

}

Pracownik::~Pracownik()
{
	licznik--;
	cout << "Usuwam pracownika: ";
	cout << "licznik" <<licznik<< endl;
}
