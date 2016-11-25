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
	cin >> eingabe;
	cout << "Berechnung des Mittelwertes:" << endl;

	do {
		tmp = eingabe + tmp;
		zahl = tmp / i;
		cout << i << ". Zahl: " << eingabe << endl;
		cout << "Mittelwert = " << zahl << endl;
		if (eingabe > max) max = eingabe;
		if ((min == 0 && eingabe < max) || zahl < min) min = eingabe; 
		do {
			cout << "Soll eine weitere Zahl eingegeben werden (J/N)? ";
			cin >> antwort;
			antwort = char(toupper(antwort));
			if (antwort == 'J') {
				cout << "Geben Sie die naechste Zahl ein: ";
				cin >> eingabe;
				i++;
			}
			if (antwort == 'N') {
				cout << "Der endgueltige Mittelwert lautet: " << zahl << endl;
				cout << "Der groesste eingegebene Wert lautet: " << max << endl;
				if (min != 0)
					cout << "Der kleinste eingegebene Wert lautet: " << min << endl;
				else
					cout << "Es wurde kein kleinerer Wert als " << max << " eingegeben." << endl;
			}
		} while (antwort != 'J' && antwort != 'N');
	} while (antwort == 'J' && antwort != 'N');

	return 0;
}
