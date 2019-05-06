#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Run {
	string nev;
	double tav;
	Run *bal, *jobb;
};

void addDist(Run* gyoker, const string &nev, const double& tav) {
	if (gyoker->nev == nev) {
		gyoker->tav += tav;
		}
	else {
		if (nev < gyoker->nev) {
			if (gyoker->bal)
				addDist(gyoker->bal, nev, tav);
			else {
				Run* uj = new Run;
				gyoker->bal = uj;
				uj->nev = nev;
				uj->tav = tav;
				uj->bal = uj->jobb = nullptr;
			}
		}
		else {
			if (gyoker->jobb)
				addDist(gyoker->jobb, nev, tav);
			else {
				Run* uj = new Run;
				gyoker->jobb = uj;
				uj->nev = nev;
				uj->tav = tav;
				uj->bal = uj->jobb = nullptr;
			}
		}
		}
}

void kiir(Run* gy) {
	if (gy) {
		kiir(gy->bal);
		cout << "Nev: " << gy->nev << "\t" << gy->tav << " km\n";
		kiir(gy->jobb);
	}
}

void torol(Run* gy) {
	if (gy) {
		torol(gy->bal);
		torol(gy->jobb);
		delete gy;
	}
}

int main(int argc, char** argv)
{
	if (argc != 2) {
		cout << "Nem adta meg a fajl nevet argumentumkent!\n";
		cout << "Hasznalat: " << argv[0] << "fajlnev\n";
		return 3;
	}
	ifstream input;
	input.open(argv[1]);

	if (!input.is_open()) {
		cout << "A fajl nem talalhato.\n";
		return -1;
	}

//tombos megoldas
/*	int meret = 2, db = 0;
	Run* tomb = new Run[meret];
	while (!input.eof()) {
		string nev;
		double tav;
		input >> nev >> tav;

		// nev keresese a tombben
		int idx = 0;
		while (idx < db && tomb[idx].nev != nev)
			++idx;
		if (idx < db) { // megtalaltuk, noveljuk a tavolsagot
			tomb[idx].tav += tav;
		}
		else { // uj szemely, adjuk hozza a tombhoz
			if (db == meret) { // tele a tomb, novelni kell
				meret += 3;
				cout << "Betelt a tomb, az uj meret: " << meret << endl;
				Run *nagyobb = new Run[meret]; // uj, nagyobb tomb foglalasa
				for (int i = 0; i < db; ++i)   // regi elemek masolasa
					nagyobb[i] = tomb[i];
				delete[] tomb;
				tomb = nagyobb;
			}
			// uj elem hozzaadasa
			tomb[db].nev = nev;
			tomb[db].tav = tav;
			db++;
		}
	}

	for (int i = 0; i < db; ++i)
		cout << "Nev: " << tomb[i].nev << "\t" << tomb[i].tav << " km\n";
	*/

//fas megoldas

	Run* gyoker = nullptr;
	while (!input.eof()) {
		string nev;
		double tav;
		input >> nev >> tav;
		
		if (!gyoker) {
			gyoker = new Run;
			gyoker->nev = nev;
			gyoker->tav = tav;
			gyoker->bal = gyoker->jobb = nullptr;
		}
		else {
			addDist(gyoker, nev, tav);
		}
	}
	kiir(gyoker);

	input.close();
	ofstream kimenet("runs.log", ios::app); // rogton meg is nyitja (hozzafuzesre)
	if (!kimenet.is_open()) {
		cout << "Nincs irasi jogosultsag a fajlhoz.\n";
		return -2;
	}

	string nev;
	double tav;
	do {
		cout << "Adjon meg uj adatot!\n";
		cin >> nev;
		if (nev != "exit") {
			cin >> tav;
			addDist(gyoker, nev, tav);
			kimenet << endl << nev << ' ' << tav;
			kiir(gyoker);
		}
	} while (nev != "exit");

	//enum Mod { read, write=4, append=7 };


	torol(gyoker);
	kimenet.close();
	return 0;
}
