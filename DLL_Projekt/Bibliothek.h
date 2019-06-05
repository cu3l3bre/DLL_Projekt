#pragma once

// Funktion die zwei ganzen Zahlen addiert
int addiereZahlen(int zahl1, int zahl2);


class Punkt
{
public:
	// Attribute
	int x;
	int y;

	// Konstruktor
	Punkt();
	~Punkt();

	// Methoden
	void punktwerteAnzeigen();

	/*// statische Mehtode
	static void sayHelloWorld()
	{
		cout << "Hello World" << endl;
	}*/
};