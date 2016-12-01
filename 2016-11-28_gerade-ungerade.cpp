// Funktionen 3 - Wert gerade.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int gerade(int);

int main()
{

	int x, erg;

	cout << "Geben Sie eine Zahl ein: ";
	cin >> x;

	erg = gerade(x);

	if (erg == 1) cout << "Die Zahl " << x << " ist gerade." << endl;
	else cout << "Die Zahl " << x << " ist ungerade." << endl;

    return 0;
}

int gerade(int a) {
	int erg;
	
	if (a % 2 == 0) 
		erg = 1;
	else
		erg = 0;

	return erg;
}
