#include "Idopont.h"

#include <iostream>

void beker(Idopont* t) {
	using namespace std;
	cin >> t->ora >> t->perc;
	cin.ignore(1);
}

void kiir(Idopont t, bool sortores) {
	std::cout << t.ora << ':' << t.perc;
	if (sortores)
		std::cout << std::endl;
}
bool kissebbe(Idopont t1, Idopont t2) {
	return t1.ora < t2.ora || t1.perc < t2.perc;
}
