// PQ-Formel.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "math.h"
using namespace std;

double pq_x1(double, double);
double pq_x2(double, double);

int main()
{
	double q, p, x1, x2;

	cout << "Geben Sie einen Wert fuer 'p' ein: ";
	cin >> p;

	cout << "Geben Sie einen Wert fuer 'q' ein: ";
	cin >> q;

	x1 = pq_x1(p, q);
	x2 = pq_x2(p, q);

	cout << "Die Ergebnisse lauten x1 = " << x1 << " und x2 = " << x2 << "." << endl;

    return 0;
}

double pq_x1(double p, double q) {
	double sqr, erg;

	sqr = ((p / 2)*(p / 2)) - q;

	if (sqr < 0) return 0;

	erg = -(p / 2) + sqrt(sqr);

	return erg;
}

double pq_x2(double p, double q) {
	double sqr, erg;

	sqr = ((p / 2)*(p / 2)) - q;

	if (sqr < 0) return 0;

	erg = -(p / 2) - sqrt(sqr);

	return erg;
}
