//ora 1 && 2
#include <iostream>

using namespace std;

int main() {

	int szul, akt = 2019;
	cout << "Adja meg az szuetesi evet!" << endl;
	cin >> szul;
	cout << "Az akt eletkora kb. " << akt - szul << " ev! \n";

	int ev = szul;
	while (ev <= akt) {
		cout << ev << endl;
		if (ev % 4 == 0) { cout << "\t Olimpiai ev!\n"; }
		ev = ev + 1; // az ev +=1 es ev++ (elobb utas utana no) es ++ev is u.e.
	}
	int sz;
	cout << "Adjon meg egy szamot" << endl;
	cin >> sz;
	if (sz >= 0) { cout << "A szam abszolut erteke: " << sz << endl; }
	else { cout << "A szam abszolut erteke: " << -sz << endl; }

	cout << "Viszlat!\n";
}