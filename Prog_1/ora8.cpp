#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct GPS {
	double szelfok, hosszfok;
};

struct Varos {
	string nev;
	int lakossag;
	GPS koord;
};

void kiirVaros(Varos v) {
	cout << setw(11);
	cout << v.nev << "\t(" << v.koord.szelfok << "," << v.koord.hosszfok << ")\t";
	cout << v.lakossag << " lakos \n";
}
void kiirVarosok(Varos* varosok, int db) {
	for (int i = 0; i < db; i++) {
		cout << i + 1 << ". varos: ";
		kiirVaros(varosok[i]);
	}
}

// vissza adja a legkisebb lakossagu varos indexet
int Min(Varos* varosok, int db, int tol=0) {
	int min=tol;
	for (int i = tol; i < db; i++) {
		if (varosok[i].lakossag < varosok[min].lakossag) min=i;
	}
	return min;
}


// felcsereli a varosok tombjeben a 2 megadott indexu elemet
void csere(Varos* varosok, int a, int b) {
	Varos csere;
	csere = varosok[a];
	varosok[a] = varosok[b];
	varosok[b] = csere;
}


// lakossag szam szerinti sorrendben rendez
void rendez(Varos varosok[], int db) {
	// bena rendezes
	/*	for (int i = 0; i < db; i++) {
			for (int j = 0; j < db; j++) {
				if (varosok[j].lakossag < varosok[i].lakossag) csere(varosok, i, j);
			}
		}
	*/
	// buborek rendezes
	/*for (int i = db; i > 0; i--) {
		for (int j = 0; j < i - 1; j++) {
			if (varosok[j].lakossag < varosok[j + 1].lakossag) { csere(varosok, j, j + 1); }
		}
	} */

	int minindex;
for (int i = 0; i < db -1 ; i++) {
	minindex = Min(varosok, 5, i);
	csere(varosok, i, minindex);
	}

}

int main() {

	int szam;
	Varos szulovaros;
	szam = 4;
	szulovaros.nev = "Csorna";
	szulovaros.lakossag = 10335;
	szulovaros.koord.hosszfok = 47.62;
	szulovaros.koord.szelfok= 17.25;
	int szamok[] = { 1, 2, 3 };
	Varos fovaros = { "Budapest", 1749734, {47.49, 19.04 }};
	Varos varosok[] =
	{
		szulovaros,
		fovaros,
		{"Gyor", 130094, {47.69, 17.64}},
		{"Becs", 1840573, {48.21, 16.37}},
		{"Pozsony", 425923, {48.15, 17.12}}
	};
	cout << setprecision(8);
	kiirVarosok(varosok, 5);
	cout << endl;

	csere(varosok, 0, 1);
	kiirVarosok(varosok, 5);
	cout << "A legisebb lakossagu varos";
	kiirVaros(varosok[Min(varosok, 5)]);

	cout << "Varosok lakossag szerinti novekvo sorrendben: \n";
	rendez(varosok, 5);
	kiirVarosok(varosok, 5);

}