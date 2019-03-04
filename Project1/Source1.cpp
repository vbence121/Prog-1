#include <iostream>
#include <cmath>
#define N 5
using namespace std;

void test() { cout << "Hello World"; }
int main() {
	int sz[N],i,ossz=0;
	cout << "Addja meg az " << N << "db szamot" << endl;
	for (i = 0; i < N; i++) {
		cin >> sz[i];
		ossz += sz[i];
	}

	// osszeg, atlag
	double atl = (double)ossz / N;
	cout << "Az osszeg : " << ossz << endl;
	cout << "Az atlag : " << (double)ossz/N << endl;	// static_cast<double>(ossz) ugyan az csak rondabb

	// szorasnegyzet, szoras, atlagos abszolut elteres
	double szorasn = 0, szoras, atlelt = 0;
	for (i = 0; i < N; i++) {
		szorasn += pow(atl - sz[i], 2);
		atlelt += abs(atl - sz[i]);
	}
	szorasn = szorasn / N;
	atlelt = atlelt / N;
	szoras = sqrt(szorasn);
	cout << "A szorasnegyzet " << szorasn << endl << "A szoras " << szoras << endl << "Az atlagos abszolut elteres " << atlelt << endl;
	return 0;
}