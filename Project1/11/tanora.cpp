#include "Tanora.h"

#include <iostream>

void beker(Tanora* tan) {
	using namespace std;
	getline(cin, tan->nev);
	beker(&tan->kezdes);
	beker(&tan->vege);
}

void kiir(const Tanora* tan) {
	using namespace std;
	kiir(tan->kezdes);
	cout << '-';
	kiir(tan->vege);
	cout << ": " << tan->nev << " ora\n";
}
