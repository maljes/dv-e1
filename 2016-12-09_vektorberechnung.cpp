// Vektoren Addition.cpp : Definiert den Einstiegspunkt fuer die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int a[3], b[3], c[3], x, y, z;
	char ans;

	cout << "Geben Sie einen Wert fuer a[1] ein: ";
	cin >> a[0];
	cout << "Geben Sie einen Wert fuer a[2] ein: ";
	cin >> a[1];
	cout << "Geben Sie einen Wert fuer a[3] ein: ";
	cin >> a[2];

	cout << endl << "Geben Sie einen Wert fuer b[1] ein: ";
	cin >> b[0];
	cout << "Geben Sie einen Wert fuer b[2] ein: ";
	cin >> b[1];
	cout << "Geben Sie einen Wert fuer b[3] ein: ";
	cin >> b[2];

	b[0] = a[0] + b[0];
	b[1] = a[1] + b[1];
	b[2] = a[2] + b[2];

	do {
		cout << endl << "Wollen Sie einen weiteren Vektor hinzufuegen? (J/N): ";
		cin >> ans;

		ans = toupper(ans);
	} while (ans != 'J' && ans != 'N');

	while (ans == 'J' && ans != 'N') {
		cout << endl << "Geben Sie einen Wert fuer a[1] ein: ";
		cin >> a[0];
		cout << "Geben Sie einen Wert fuer a[2] ein: ";
		cin >> a[1];
		cout << "Geben Sie einen Wert fuer a[3] ein: ";
		cin >> a[2];

		b[0] = a[0] + b[0];
		b[1] = a[1] + b[1];
		b[2] = a[2] + b[2];

		do {
			cout << endl << "Wollen Sie einen weiteren Vektor hinzufuegen? (J/N): ";
			cin >> ans;

			ans = toupper(ans);
		} while (ans != 'J' && ans != 'N');

	}

	

	cout << endl << "Das Ergebnis lautet:" << endl << "x = " << b[0] << "; y = " << b[1] << "; z = " << b[2] << endl << endl;

	return 0;
}

