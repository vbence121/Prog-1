#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void kiir(int szeles, char** uz, bool titkos) {
	for (int i = 0; i < szeles; i++) {
		for (int j = 0; j < szeles; j++) {
			cout << uz[j][i];
		}
		if (titkos == false) cout << endl;
	}
}

int main() {
	string uzenet;
	int szeles;
	cout << "Adja meg a titkos uzenetet" << endl;
	getline(cin, uzenet);
	cout << "Adja meg a tomb szeleseget" << endl;
	cin >> szeles;
	cout << endl;
// tablazat lefoglalasa
	for (int i = 0; i < uzenet.length(); i++) {
		uzenet[i] = toupper(uzenet[i]);
	}
	while (uzenet.length() % szeles != 0) {
		uzenet += ' ';
	}

	char** uz = new char*[szeles];
	for (int i = 0; i < szeles; i++) {
			uz[i] = new char[]; // magassag kell
	}
// tablazat feltoltese
	int poz=0;
	for (int i = 0; i < szeles; i++) {
		for (int j = 0; j < szeles; j++) {
			uz[i][j] = uzenet[poz];
			poz++;
		}
	}
cout << endl;
// kiir tombkent
	kiir(szeles, uz, false);
cout << endl;
// kiir titkositva
	kiir(szeles, uz, true);
	cout << endl;
//tabla felszab 
for (int i = 0; i < szeles; i++) {
		delete[] uz[i];
	}
	delete[] uz;
}