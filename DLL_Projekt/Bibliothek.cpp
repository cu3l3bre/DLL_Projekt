#include "Bibliothek.h"

#include <iostream>

using namespace std;


int addiereZahlen(int zahl1, int zahl2)
{
	int ergebnis = zahl1 + zahl2;
	return ergebnis;
}



// Konstruktor
Punkt::Punkt()
{
	x = 0;
	y = 0;
}


Punkt::~Punkt(){}


void Punkt::punktwerteAnzeigen()
{
	cout << "(" << x << "," << y << ")" << endl;
}