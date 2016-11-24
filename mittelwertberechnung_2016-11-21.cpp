// Mittelwertberechnung.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>
#include <ctype.h>
using namespace std;


int main()
{
	char antwort;
	float eingabe, zahl, tmp = 0;
	int i=1;


	cout << "Gib eine Zahl ein:" << endl;
	cin >> eingabe;
	
	do {
		tmp = eingabe + tmp;
		zahl = tmp / i;
		cout << i << ". Zahl: " << eingabe << endl;
		cout << "Mittelwert: " << zahl << endl;
		cout << "Soll eine weitere Zahl eingegeben werden (J/N)?" << endl;
		cin >> antwort;
		antwort = char(toupper(antwort));
		if (antwort == 'J') {
			cout << "Geben Sie die naechste Zahl ein:" << endl;
			cin >> eingabe;
			i++;
		}
		if (antwort == 'N') {
			cout << "Der endgueltige Mittelwert lautet: " << zahl << endl;
		}
	} while (antwort == 'J' && antwort != 'N');

    return 0;
}

