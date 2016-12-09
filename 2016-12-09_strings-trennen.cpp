// Schülerdatenbank.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	char name[60], vorname[20], nachname[20], klasse[20];
	int i, o = 0, t = 0;

	cout << "Geben Sie einen Namen ein (Nachname, Vorname, Klasse): ";
	gets_s(name);

	for (i = 0; i <= 59; i = i++) {
		if (name[i] == ',') {
			nachname[i] = '\0';
			break;
		}

		nachname[i] = name[i];
	}

	for (i = i+2; i <= 59; i = i++) {
		if (name[i] == ',') {
			vorname[o] = '\0';
			break;
		}

		vorname[o] = name[i];
		o++;
	}

	for (i = i+ 2; i <= 59; i = i++) {
		klasse[t] = name[i];
		t++;
		if (name[i] == '\0') {
			break;
		}
	}

	cout << vorname << " " << nachname << " (" << klasse << ")" << endl;

    return 0;
}

