#ifndef INFORMATYK_H
#define INFORMATYK_H

#include "Pracownik.h"

class Informatyk:public Pracownik
{
	float przelicznik = 3.5;
public:
	Informatyk(string imie = "Jan", string nazwisko = "Kowalski", int ID = 1234);
	~Informatyk();
};

#endif INFORMATYK_H