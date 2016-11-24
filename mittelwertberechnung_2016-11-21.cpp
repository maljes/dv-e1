// Mittelwertberechnung.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>
#include <ctype.h>
using namespace std;


int main()
{
	char antwort;
	float eingabe, zahl, tmp = 0, max = 0, min = 0;
	int i = 1;

	cout << "Gib eine Zahl ein: "; 
	cin >> eingabe; /* Eingabe der ersten Zahl */
	cout << "Berechnung des Mittelwertes:" << endl;

	do {
		tmp = eingabe + tmp; /* Addieren der Eingabe sowie des Wertes der Vorrunde */
		zahl = tmp / i; /* Teilen des Ergebnisses durch die Anzahl der Runden */
		cout << i << ". Zahl: " << eingabe << endl; /* Ausgabe der Runde sowie der eingegebenen Zahl */
		cout << "Mittelwert = " << zahl << endl; /* Ausgabe des errechneten Mittelwertes */
		if (zahl > max) max = zahl; /* Überprüfung ob Ergebnis am größten */
		if ((min == 0 && zahl < max) || zahl < min) min = zahl; /* Überprüfung ob Ergebnis am kleinsten sowie Überprüfung ob min = 0 */
		cout << "Soll eine weitere Zahl eingegeben werden (J/N)? ";
		cin >> antwort;
		antwort = char(toupper(antwort)); /* kleine Buchstaben in große umwandeln */
		if (antwort == 'J') { /* Überprüfung ob Eingabe = J */
			cout << "Geben Sie die naechste Zahl ein: ";
			cin >> eingabe;
			i++; /* Runde + 1 */
		}
		if (antwort == 'N') { /* Überprüfung ob Eingabe = N */
			cout << "Der endgueltige Mittelwert lautet: " << zahl << endl;
			cout << "Der groesste Mittelwert lautet: " << max << endl;
			cout << "Der kleinste Mittelwert lautet: " << min << endl;
		}
	} while (antwort == 'J' && antwort != 'N');

	return 0;
}
