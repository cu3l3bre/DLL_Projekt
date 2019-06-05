#include "Bibliothek.h"
#include <iostream>

using namespace std;


int main()
{
	cout << "Programm zu DLL_Projket" << endl << endl;

	// statiche Methode, im Prinzip wie ne globale Funktion
	// kann  ohne Obect aufgerufen werden
	// sieht dann vllt schöner aus weil, man die Klasse davor schreiben muss
	//Punkt::sayHelloWorld();
	
	Punkt p1;
	p1.x = 20;
	p1.y = 30;
	p1.punktwerteAnzeigen();

	// Punkt auf dem Heap, Zeiger zeigt liegt auf dem Stack
	Punkt* p2 = new Punkt;
	p2->x = 40;
	p2->y = 50;
	delete p2;

	cout << addiereZahlen(2, 3) << endl;

	system("pause");
	return 0;
}