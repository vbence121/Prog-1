#include <iostream>

using namespace std;

int main() {
	int osszeg = 0, max;
	bool urese = true;
	do {
		int szam;
		cin >> szam;

		osszeg += szam;	//osszeg = osszeg + szam;

		if (urese || szam > max) {
			max = szam;
			urese = false;
		}
	} while (osszeg < 100);

	cout << "Az osszeg: " << osszeg << endl;
	cout << "A legnagyobb szam: " << max << endl;
}
