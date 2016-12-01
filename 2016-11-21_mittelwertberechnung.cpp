// Mittelwertberechnung.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>
#include <ctype.h>
using namespace std;


int main()
{
	char antwort;
	float eingabe, zahl, tmp = 0, max, mid, min;
	int i = 1;

	cout << "Geben Sie die "<< i <<". Zahl ein: ";
	cin >> eingabe;
	cout << "Berechnung des Mittelwertes:" << endl;

	do {
		tmp = eingabe + tmp;
		zahl = tmp / i;
		cout << i << ". Zahl: " << eingabe << endl;
		cout << "Mittelwert = " << zahl << endl;
		if (i == 1 || eingabe > max) max = eingabe;
		if (i == 1 || ((eingabe < mid || mid == min) && (eingabe > min || mid == max))) mid = eingabe;
		if (i == 1 || eingabe < min) min = eingabe; 
		do {
			cout << "Soll eine weitere Zahl eingegeben werden (J/N)? ";
			cin >> antwort;
			antwort = char(toupper(antwort));
			if (antwort == 'J') {
				i++;
				cout << "Geben Sie die "<< i << ". Zahl ein: ";
				cin >> eingabe;
			}
			if (antwort == 'N') {
				cout << "Der endgueltige Mittelwert lautet: " << zahl << endl;
				cout << "Der groesste eingegebene Wert lautet: " << max << endl;
				cout << "Der zweitkleinste eingegebene Wert lautet: " << mid << endl;
				if (min != max)
					cout << "Der kleinste eingegebene Wert lautet: " << min << endl;
				else
					cout << "Es wurde kein kleinerer Wert als " << max << " eingegeben." << endl;
			}
		} while (antwort != 'J' && antwort != 'N');
	} while (antwort == 'J' && antwort != 'N');

	return 0;
}
