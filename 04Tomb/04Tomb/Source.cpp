#include <iostream>
#define MERET 10

using namespace std;

int main() {
	// kerjunk be 3 db szamot
	// irjuk ki oket forditott sorrendben
	//int n1, n2, n3;
	//cin >> n1 >> n2 >> n3;
	//cout << n3 << ' ' << n2 << ' ' << n1 << endl;

	//int tomb[3];
	//cin >> tomb[0] >> tomb[1] >> tomb[2];
	//cout << tomb[0] << ' ' << tomb[1] << ' ' << tomb[2] << endl;
	
	cout << "MERET = " << MERET << endl;
	int nagytomb[MERET];
	int i = 0;
	while (i < MERET) {
		cin >> nagytomb[i];
		i++;
	}
	i = MERET-1;
	while (i >= 0) {
		cout << nagytomb[i] << ' ';
		i--;
	}
	cout << endl;
	// irjuk ki azokat, amik nagyobbak az utolso elemnel
	i = 0;
	while (i < MERET) {
		if (nagytomb[i] > nagytomb[MERET-1])
			cout << nagytomb[i] << ' ';
		i++;
	}
	cout << endl;
	// irjuk ki minden masodik elem erteket
	for (int j = 1; j < MERET; j+=2) {
		cout << nagytomb[j] << ' ';
	}
	cout << endl;

	// kerjunk be ket sorszamot
	int a, b;
	cout << "Kerem a felcserelendo ket sorszamot!\n";
	cin >> a >> b;
	a--;
	b--;
	// csereljuk fel az adott sorszamu elemeket
	nagytomb[a] = nagytomb[b];
	nagytomb[b] = nagytomb[a];
	// irjuk ki a kapott tombot
	for (int j = 0; j < MERET; j++) {
		cout << nagytomb[j] << ' ';
	}
	cout << endl;

	// kerjunk be 10 db szamot
	// irjuk ki oket novekvo sorrendben
}