// Durchschnittstemperatur.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	double temperatur[7], durchschnitt, tmp=0;
	int i;

	for (i = 0; i <= 6; i = i++) {
		cout << "Geben Sie die Temperatur des " << i + 1 << ". Tag ein: ";
		cin >> temperatur[i];
		tmp = tmp + temperatur[i];
	}

	durchschnitt = tmp / i;

	cout << "\nDie Durchschnittstemperatur betraegt " << durchschnitt << char(248) << "C." << endl;

    return 0;
}

