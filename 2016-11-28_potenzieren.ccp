// Funktion 2 - Potenzieren.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

double potenz(double, int);

int main()
{
	double a;
	int b;

	cout << "Geben Sie die zu potenzierende Zahl ein: ";
	cin >> a;
	cout << "Geben Sie die Potenz ein: ";
	cin >> b;

	cout << "Das Ergebnis lautet: " << potenz(a,b) << "." << endl;

    return 0;
}

double potenz(double base, int n) {
	int i;
	double erg = 1;

	if (n < 0) {
		n = n * (-1);
		for (i = 1; i <= n; i = i++) {
			erg = erg * base;
		}

		erg = 1 / erg;

		if (base == 0)
			erg = 0;
	}
	else {
		for (i = 1; i <= n; i = i++) {
			erg = erg * base;
		}
	}

	return erg;
}

