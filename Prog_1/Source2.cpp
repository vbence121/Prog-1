#include <iostream>
using namespace std;

int main() {
	int akt, osz, i = 0, min, max, neg = 0, kul = 0, temp, eloz;
	bool p = false;
	
	cout << "Kedje meg a szamok megadasast! \n";
	cin >> akt;
	max = osz = akt;
	if (akt % 2 == 0) {
		min = akt;
		p = true;
	}
	if (akt < 0) neg++;
	i++;
	while (osz < 100) {
		eloz = akt;
		cin >> akt;
		osz += akt;
		if (p && akt % 2 == 0 && akt < min) min = akt;
		else if (akt % 2 == 0 && !p) {
			min = akt;
			p = true;
		}
		if (akt > max) max = akt;
		if (akt < 0) neg++;
		if (akt - eloz > 0) temp = akt - eloz;
		else temp = (akt - eloz) * -1;
		if (kul < temp) kul = temp;
		i++;
	}
	cout << "Az osszeg: " << osz << " volt, \n";
	cout << "A legnagyobb kulombseg: " << kul << " volt, \n";
	cout << "A negativ szamok szama: " << neg << " volt, \n";
	cout << "A legnagyobb szam: " << max << " volt, \n";
	if ( p ) cout << "A legkisebb szam: " << min << " volt!." << endl;
	else cout << "Nem volt paros szam, legkisebb paros szam nem adhato meg!" << endl;

	return 0;
}