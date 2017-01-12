// Wettersystem.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int i = 0;
	float messwert[20], max = 0, min;

	cout << "Luftdruck-Verteilung in bar" << endl << endl;

	do {
		cout << i + 1 << ". Messwert (0=Ende) ";
		cin >> messwert[i];
		i++;
	} while (messwert[i-1] != 0 && i < 20);

	cout << endl;

	if (i == 20)
		i++;

	for (int o = 0; o < i - 1; o++) {
		cout << o + 1 << " ";
		if (o < 9)
			cout << " ";
		float n = 0;
		while (n <= messwert[o]) {
			cout << char(219);
			n = n + 0.1;
		}
		cout << endl;
	}

	cout << endl << "   " << char(219) << " entspricht 0.1 bar" << endl;

	cout << "Maximum:  ";

	for (int o = i-1; o >= 0; o--) {
		if (messwert[o] > messwert[o - 1] && messwert[o] > max) {
			max = messwert[o];
		}
	}

	cout << max << " bar" << endl;

	min = max;

	if (i < 20)
		messwert[i-1] = max;

	cout << "Minimum:  ";

	for (int o = 0; o < i - 1; o++) {
		if (messwert[o] < messwert[o + 1] && messwert[o] < min) {
			min = messwert[o];
		}
	}

	cout << min << " bar" << endl;

	cout << endl << "Programmende." << endl;

    return 0;
}

