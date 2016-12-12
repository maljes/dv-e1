// Array sortieren.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int x[20] = {23, 12, 45, 26, 76, 88, 123, 2, 34, 56, 0, 98, 45, 64, 23, 78, 8, 82, 50, 20}, tmp;

	for (int n = 0; n<20; n++) {
		for (int m = n + 1; m<20; m++) {
			if (x[n]>x[m]) {
				tmp = x[n];
				x[n] = x[m];
				x[m] = tmp;
			}
		}
	}

	for (int i = 0; i <= 19; i++) {
		cout << x[i] << "; ";
	}

	cout << endl;
    
	return 0;
}

