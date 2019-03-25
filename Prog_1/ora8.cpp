#include <iostream>
using namespace std;

struct GPS {
	double szelfok, hosszfok;
};

struct Varos {
	string nev;
	int lakossag;
	GPS koord;
};

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


}