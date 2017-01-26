#include "stdafx.h"
#include <iostream>

using namespace std;

void erhoehe(int *p_matrix, int zeilen, int spalte);
void ausgabe(int *p_matrix);

int main()
{
	int matrix[3][3], *p_matrix, a, b;

	p_matrix = &matrix[0][0];

	for (a = 0; a <= 2; a++) {
		for (b = 0; b <= 2; b++) {
			cout << "Geben Sie einen Wert fuer " << b + 1 << "/" << a + 1 << " ein: ";
			cin >> *(p_matrix + (b * 3) + a);
		}
	}

	cout << endl << "Vorher:" << endl;
	ausgabe(p_matrix);

	erhoehe(p_matrix, 3, 3);

	cout << endl << "Nachher:" << endl;

	ausgabe(p_matrix);

	cout << endl;

  	return 0;
}

void erhoehe(int *p_matrix, int zeilen, int spalte) {
	int a, b;

	for (a = 0; a <= 2; a++) {
		for (b = 0; b <= 2; b++) {
			*(p_matrix + (b * 3) + a) = *(p_matrix + (b * 3) + a)+2;
		}
	}

}

void ausgabe(int *p_matrix) {
	int a, b, i;

	for (a = 0; a <= 2; a++) {
		for (b = 0, i = 1; b <= 2; b++, i++) {
			cout << *(p_matrix + (b * 3) + a) << "; ";
			if (i == 3) {
				cout << endl;
				i = 0;
			}
		}
	}
}

