#include <iostream>
#include <string>

#include "Informatyk.h"
#include "Kierownik.h"
#include "Pracownik.h"

using namespace std;

int Pracownik::licznik;
int Pracownik::iiD;

int main()
{
	Pracownik *pierwszy=new Pracownik;
	Pracownik *drugi=new Pracownik;
	drugi->wpisz();
	Informatyk *programista=new Informatyk;
	programista->wpisz();
	Informatyk *programista2 = new Informatyk;
	*programista2 = *programista;
	Kierownik *zarzadzca = new Kierownik;

	pierwszy->wypisz();
	drugi->wypisz();
	programista->wypisz();
	programista->wypisz();
	zarzadzca->wypisz();
	system("pause");
	system("cls");
	cout << "Tworze tablice[3] pracownikow" << endl;
	system("pause");

	Pracownik **zespol = new Pracownik*[3];
	zespol[0] = zarzadzca;
	zespol[1] = programista;
	zespol[2] = drugi;

	cout << "----------------Wypisuje zespol---------------- " << endl;
	for (int i = 0; i < 3; i++)
	{
		zespol[i]->wypisz();
	}
	
	cout << "--------------Usuwam obiekty:------------------" << endl;
	delete pierwszy;
	delete drugi;
	delete programista;
	delete programista2;
	delete zarzadzca;
	cout << "---------------Usuwam tablice pracownikow----------------" << endl;
	delete zespol[0];
	delete[]zespol;
	cout << "----------------zakonczylem usuwanie------------------" << endl;

	system("pause");
	return 0;
}