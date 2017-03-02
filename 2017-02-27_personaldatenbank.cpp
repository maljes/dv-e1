#include "stdafx.h"
#include <iostream>

using namespace std;

struct personal {
	int persnr;
	char name[25];
	int stunden;
	double std_lohn;
	double lohn;
} personen[4], max, min;

struct personal max_lohn(struct personal personen[4]);
struct personal min_lohn(struct personal personen[4]);

int main()
{
	personen[0].persnr = 100; strcpy(personen[0].name, "Meier"); personen[0].stunden = 152; personen[0].std_lohn = 9.20;
	personen[1].persnr = 102; strcpy(personen[1].name, "Kunze"); personen[1].stunden = 165; personen[1].std_lohn = 11.05;
	personen[2].persnr = 108; strcpy(personen[2].name, "Weber"); personen[2].stunden = 190; personen[2].std_lohn = 15.5;
	personen[3].persnr = 111; strcpy(personen[3].name, "Berger"); personen[3].stunden = 80; personen[3].std_lohn = 14.20;

	for(int n = 0; n <= 3; n++){
		personen[n].lohn = personen[n].std_lohn * personen[n].stunden;
	}

	max_lohn(personen);
	min_lohn(personen);

	cout << "Persnr \t Name \t Stunden \t Std.lohn \t Lohn" << endl;
	for (int n = 0; n <= 3; n++) {
		cout << personen[n].persnr << "\t" << personen[n].name << "\t" << personen[n].stunden << "\t\t" << personen[n].std_lohn << "\t\t" << personen[n].lohn;
		if (personen[n].persnr == max.persnr) {
			cout << "\t +";
		}
		if (personen[n].persnr == min.persnr) {
			cout << "\t -" ;
		}
		cout << endl;
	}

    return 0;
}

struct personal max_lohn(struct personal personen[4]) {
	int i = 0;

	while (i < 4) {
		if (i == 0) {
			max = personen[i];
		}
		if ((personen[i].lohn > personen[i + 1].lohn) && personen[i].lohn > max.lohn) {
			max = personen[i];		}
		i++;
	}

	return max;
}

struct personal min_lohn(struct personal personen[4]) {
	int i = 0;

	while (i < 4) {
		if (i == 0) {
			min = personen[i];
		}
		if ((personen[i].lohn < personen[i + 1].lohn) && personen[i].lohn < min.lohn) {
			min = personen[i];
		}
		i++;
	}

	return min;
}
