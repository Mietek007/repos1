#ifndef KIEROWNIK_H
#define KIEROWNIK_H

#include "Pracownik.h"

class Kierownik :public Pracownik
{
	int przelicznik = 5;
public:
	Kierownik(string imie = "Jan", string nazwisko = "Kowalski", int ID = 1234);
	~Kierownik();
};

#endif KIEROWNIK_H