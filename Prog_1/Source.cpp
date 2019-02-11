#include <iostream>

using namespace std;

int main() {

	int szul, akt = 2019;
	cout << "Adja meg az szuetesi evet!" << endl;
	cin >> szul;
	cout << "Az akt eletkora kb. " << akt - szul << " ev! \n";

	int ev = szul;
	while (ev != akt) {
		cout << ev << endl;
		ev = ev + 1;
	}

	cout << "Viszlát!\n";
}