#pragma once


#ifdef BIBLIOTHEK_EXPORTS
#define BIBLIOTHEK_API __declspec(dllexport)
#else
#define BIBLIOTHEK_API __declspec(dllimport)
#endif


// verhindert Nameskonfikte
extern "C"
{

	// Funktion die zwei ganzen Zahlen addiert
	BIBLIOTHEK_API int addiereZahlen(int zahl1, int zahl2);

	class BIBLIOTHEK_API Punkt
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