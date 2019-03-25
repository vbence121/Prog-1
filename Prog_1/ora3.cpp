#include <iostream>
using namespace std;

int main() {
	int akt, osz, i = 0, min, max, neg = 0, kul = 0, temp, eloz;
	bool p = false;						//A min ertek megletet tarolja
	/*
	cout << "Kedje meg a szamok megadasast! \n";
	cin >> akt;
	max = osz = akt;					//max es osszeg inicializalasa
	if (akt % 2 == 0) {					//ha akt paros min inicializalodik
		min = akt;
		p = true;						//ha akt paros P igazra all
	}
	if (akt < 0) neg++;					//ha akt negativ noveli
	i++;
	while (osz < 100) {
		eloz = akt;						//az akt elozo ertekenek tarolasa
		cin >> akt;
		osz += akt;						//osszeg novelese
		if (akt % 2 == 0){					//ha akt paros
			if (p && akt < min) min = akt;		//es p igaz es akt kisebb mint min taroluk el
			else if (!p) {						//vagy ha p hamis akkor inicializaljuk
				min = akt;
				p = true;
			}
		}
		if (akt > max) max = akt;				//ha max kisebb mint akt felulirjuk
		if (akt < 0) neg++;						//ha akt negativ neget noveljuk
		if (akt - eloz > 0) temp = akt - eloz;	//akt es elozo kulombsegenek abszolutertekenek tarolasa
		else temp = (akt - eloz) * -1;
		if (kul < temp) kul = temp;				//ha a temp nagyobb mint kul felulirjuk
		i++;
	}
	cout << "Az osszeg: " << osz << " volt, \n";
	cout << "A legnagyobb kulombseg: " << kul << " volt, \n";
	cout << "A negativ szamok szama: " << neg << " volt, \n";
	cout << "A legnagyobb szam: " << max << " volt, \n";
	if ( p ) cout << "A legkisebb szam: " << min << " volt!." << endl;					//ha van min kiirjuk
	else cout << "Nem volt paros szam, legkisebb paros szam nem adhato meg!" << endl;	//ha nincs, akkor kozoljuk a felhasznaloval

 // Fibonacsi sorozat
	cout << "A Fibonacsi sorozat \n";
	eloz = 0;
	akt = 1;
	cout << eloz << endl;
	while (akt < 100 || eloz < 100) {
		cout << akt << endl;
		temp = akt;
		akt = akt + eloz;
		eloz = temp;
	}
*/
//Rajz console ban
	cout << "Rajz a consoleban \n";
	int w, h, n, m;
	bool negy = false;
	cout << "Adja meg a szeleseget majd a magasagot!" << endl;
	cin >> w;
	cin >> h;
	if (w == h) negy = true;
	n = 0;
	while(n <= h){
		m = 0;
		if (n == 0 || n == h) {
			while (m <= w) {
				cout << "x";
				m++;
			}
		}
		else if (!(n == 0 || n == h)){
			cout << "x";
			m++;
			while (m <= w - 1) {
				cout << " ";
				m++;
			}
			m++;
			cout << "x";
		}
		n++;
		cout << endl;
		}
	return 0;
}