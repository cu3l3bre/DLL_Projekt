#pragma once


// verhindert Nameskonfikte
extern "C" {

	// Funktion die zwei ganzen Zahlen addiert
	__declspec(dllimport) int addiereZahlen(int zahl1, int zahl2);

	class __declspec(dllimport) Punkt
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
}