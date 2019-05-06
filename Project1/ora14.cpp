#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main () {

	ifstream input;
	input.open("runs.log");

	if (!input.is_open()) {
		cout << "A fajl nem talalhato.\n";
		return -1;
	}

	string nev;
	double tav;
	input >> nev >> tav;

	cout << "Nev " << nev << " " << tav << " km/h";
}