// Funktion 4 - Buchstaben transformieren.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

char big(char a);

int main()
{
	char a;

	cout << "Geben Sie einen kleinen Buchstaben ein: ";
	cin >> a;

	cout << "Das Ergebnis ist: " << big(a) << "." << endl;

    return 0;
}

char big(char a) {
	char erg;

	if(a >= 97 && a <= 122)
		erg = a - 32;
	else {
		if (a >= 65 && a <= 95)
			erg = a + 32;
		else
			erg = a;
	}

	return erg;
}

