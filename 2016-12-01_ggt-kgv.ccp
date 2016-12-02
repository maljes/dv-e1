/*  ggT.ccp   Groesster gemeinsamer Teiler ggt zweier Zahlen   */
#include "stdafx.h"
#include <stdio.h> 
#include <iostream>
using namespace std;

int ggt(int, int);
int kgv(int, int);

int main() {
	int a, b, erg_ggt, erg_kgv;
	
	cout << "Geben Sie die erste ganze Zahl ein: ";
	cin >> a;

	cout << "Geben Sie die zweite ganze Zahl ein: ";
	cin >> b;

	if (a < 0 || b < 0) {
		cout << "Die Zahlen sind zu klein!" << endl;
		return 0;
	}

	erg_ggt = ggt(a, b);
	erg_kgv = kgv(a, b);

	cout << "Der groesste gemeinsame Teiler lautet: " << erg_ggt << endl;
	cout << "Das kleinste gemeinsame Vielfache lautet: " << erg_kgv << endl;

	return 0;
}

int ggt(int x, int y) {
	while (x != y) {
		if (x > y)
			x = x - y;
		else
			y = y - x;
	}

	return x;
}

int kgv(int x, int y) {
	
	x = x*y / ggt(x, y);
	
	return x;
}
