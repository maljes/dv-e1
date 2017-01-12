// Parkhausautomat.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int parkZeit(int, int);
double parkGebuehr(int, int);

int main()
{
	int einfahrt, ausfahrt, kunde, zeit;
	double kosten;
	char eingabe;

	cout << "Geben Sie Ihre Einfahrts-Zeit ein: ";
	cin >> einfahrt;

	cout << "Geben Sie Ihre Ausfahrts-Zeit ein: ";
	cin >> ausfahrt;

	do {
		cout << "Sind Sie Kunde? (J/N) ";
		cin >> eingabe;

		eingabe = toupper(eingabe);
	}while(eingabe != 'J' && eingabe != 'N');

	if (eingabe == 'J')
		kunde = 1;
	else
		kunde = 0;

	zeit = parkZeit(einfahrt, ausfahrt);

	kosten = parkGebuehr(zeit, kunde);

	cout << "Die Parkgebuehrt fuer " << zeit << " Stunde(n) betraegt " << kosten << " EUR." << endl;

    return 0;
}

int parkZeit(int einfahrt, int ausfahrt) {
	int	result = ausfahrt - einfahrt;
	if (result % 100 != 0)
		result = result/100+1;
	else
		result = result / 100;
	return result;
}

double parkGebuehr(int zeit, int kunde) {
	double result;
	if (kunde == 1)
		result = 0.5*zeit;
	else
		result = 1*zeit;
	return result;
}

