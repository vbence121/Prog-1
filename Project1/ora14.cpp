#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

	ifstream input;
	input.open("runs.log");

	if (!input.is_open()) {
		cout << "A fajl nem talalhato.\n";
		return -1;
	}

	while (!input.eof()) {

		string nev;
		double tav;
		input >> nev >> tav;
		cout << "Nev " << nev << " " << tav << " km/h \n";

	}
	
	input.close();

	//enum Mod { read, write=4, append=7};

	ofstream kimenet("runs.log", ios::app); // rogton meg is nyitja (hozzafuzesre)
	if (!kimenet.is_open()) {
			cout << "Nincs irasi jogosultsag a fajlhoz.\n";
			return -2;
	}

	kimenet.close();
	return 0;
}