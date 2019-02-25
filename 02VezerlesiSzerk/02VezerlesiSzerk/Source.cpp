#include <iostream>

using namespace std;

int main() {
	cout << "Kerem a szuletesi evet!\n";
	int szulev;
	cin >> szulev;
	cout << "Az eletkor: " << 2019 - szulev << " ev" << endl;

	int ev = szulev;

	while ( ev <= 2019 && ev >= 1900 ) {
		if (ev % 4 == 0)
			cout << "\tOlimpiai ev:";
		//ev = ev + 1;
		//ev += 1;
		//ev++;
		//++ev;
		cout << ev++ << endl;
	}

	if (szulev & 1) {
		cout << "paratlan evben szulettel\n";
	}
	else {
		cout << "paros evben szulettel\n";
	}

	int szam;
	cin >> szam;
	if (szam < 0)
		szam = -szam;
	cout << "Az abszolut erteke: " << szam;
	/*
	if (szam < 0) { // ez egy masik megoldas
		cout << -szam;
	}
	else {
		cout << szam;
	}
	*/
	cout << endl;

	cout << "Viszlat!\n";
}