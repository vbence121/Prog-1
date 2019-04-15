#include <iostream>
#include <string>

#include "Idopont.h"
#include "Tanora.h"

struct Nap {
	Tanora* orak;
	int meret;
};

struct Hallgato {
	std::string nev;
	Nap orarend[5];
};

void beker(Nap*);
void kiir(const Nap*);
void beker(Hallgato*);
void kiir(const Hallgato*);

void beker(Nap* nap) {
	using namespace std;
	cin >> nap->meret;
	cin.ignore(1);
	nap->orak = new Tanora[nap->meret];
	for (int i = 0; i < nap->meret; ++i) {
		beker(nap->orak + i);
	}
}

void kiir(const Nap* nap) {
	using namespace std;
	for (int i = 0; i < nap->meret; ++i) {
		kiir(nap->orak + i);
	}
}

void beker(Hallgato* h) {
	using namespace std;
	getline(cin, h->nev);
	for (int i = 0; i < 5; ++i) {
		beker(h->orarend + i);
	}
}

void kiir(const Hallgato* h) {
	using namespace std;
	cout << "Nev: " << h->nev << endl;
	for (int i = 0; i < 5; ++i) {
		kiir(h->orarend + i);
	}
}

void mitCsinal(const Hallgato* h, int nap, Idopont t) {
	bool oranVan = false;
	for (int i = 0; i < h->orarend[nap].meret; i++) {
		if (kissebbe(h->orarend[nap].orak[i].kezdes, t)
			&& kissebbe(t, h->orarend[nap].orak[i].vege))
		{ // az idopont utkozik az oraval
			std::cout << h->nev << ": " << h->orarend[nap].orak[i].nev << std::endl;
			oranVan = true;
		}
	}
	if (!oranVan) {
		std::cout << h->nev << ": Alszik\n";
	}
}

int main()
{
	Hallgato osztaly[4];
	for (int i = 0; i < 4; ++i) {
		beker(osztaly + i);
	}
	for (int i = 0; i < 4; ++i) {
		kiir(osztaly + i);
	}
	std::cout << "Keresett nap?\n";
	int nap;
	std::cin >> nap;
	std::cout << "Keresett ido?\n";
	Idopont t;
	beker(&t);
	for (int i = 0; i < 4; ++i) {
		mitCsinal(osztaly + i, nap, t);
	}
}
