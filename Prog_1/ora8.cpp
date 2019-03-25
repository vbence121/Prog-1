#include <iostream>
#include <string>
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
	cout << v.nev << "\t(" << v.koord.szelfok << "," << v.koord.hosszfok << ")\t";
	cout << v.lakossag << " lakos \n";
}
void kiirVarosok(Varos* varosok, int db) {
	for (int i = 0; i < db; i++) {
		kiirVaros(varosok[i]);
	}
}

// lakossag szam szerinti sorrendben rendez
void rendez(Varos tomb[], int db) {
	
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
	Varos fovaros = { "Budapest", 1749734, 47.49, 19.04 };
	Varos varosok[] =
	{
		szulovaros,
		fovaros,
		{"Gyor", 130094, {47.69, 17.64}},
		{"Bécs", 1840573, {48.21, 16.37}},
		{"Pozsony", 425923, {48.15, 17.12}}
	};

}