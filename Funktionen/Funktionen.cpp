#include <iostream>
#include <string>

using namespace std;

// Funktioen definieren
// einfache Funktion, die einen Text ausgibt (ohne Parameter, ohne Rückgabe)
void SchreibeBegruessung(void) // Das Void was übergeben wird kann weggleassen werden, meinungssache
{
	cout << "Hallo, bitte gib einen Text ein" << endl;
}

//Funktion, die einen variablen Text ausgibt (mit Parameter, ohne Rückgabe)
void SchreibeText(string Text)
{
	cout << Text << endl;
}

// ohne Parameter, mit Rückgabewert
int GibAntwort(void)
{
	return 42;
}


// mit Parameter und Rückgabe
int AddiereZahlen(int Zahl1, int Zahl2)
{
	int Ergebnis = Zahl1 + Zahl2;
	return Ergebnis;
}


int main()
{

	string Eingabe = "";
	

	cout << "Programm zu Funktionen" << endl;

	//Funktionen ausfuehren
	SchreibeBegruessung();
	cin >> Eingabe;
	SchreibeText(Eingabe);

	cout << GibAntwort() << endl;

	int Result = AddiereZahlen(3,4);
	cout << "Ergebnis der Addition: " << Result << endl;

	system("pause");
    return 0;
}

