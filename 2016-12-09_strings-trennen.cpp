// Schülerdatenbank.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	char name[40], vorname[20], nachname[20];
	int i, o = 0;

	cout << "Geben Sie den Namen ein (Nachname, Vorname): ";
	gets_s(name);

	for (i = 0; i <= 39; i = i++) {
		if (name[i] == ',') {
			nachname[i] = '\0';
			break;
		}

		nachname[i] = name[i];
	}

	for (i = i+ 2; i <= 39; i = i++) {
		vorname[o] = name[i];
		o++;
		if (name[i] == '\0') {
			break;
		}
	}

	cout << vorname << " " << nachname << endl;

    return 0;
}
