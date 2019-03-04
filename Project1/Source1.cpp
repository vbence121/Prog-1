#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#define N 5
using namespace std;

void statisztika() {
	int sz[N], i, ossz = 0;
	cout << "Addja meg az " << N << "db szamot" << endl;
	for (i = 0; i < N; i++) {
		cin >> sz[i];
		ossz += sz[i];
	}

	// osszeg, atlag
	double atl = (double)ossz / N;
	cout << "Az osszeg : " << ossz << endl;
	cout << "Az atlag : " << (double)ossz / N << endl;	// static_cast<double>(ossz) ugyan az csak rondabb

	// szorasnegyzet, szoras, atlagos abszolut elteres
	double szorasn = 0, szoras, atlelt = 0;
	for (i = 0; i < N; i++) {
		szorasn += pow(atl - sz[i], 2);
		atlelt += abs(atl - sz[i]);
	}
	szorasn = szorasn / N;
	atlelt /= N;
	szoras = sqrt(szorasn);
	cout << "A szorasnegyzet: " << szorasn << endl << "A szoras: " << szoras << endl << "Az atlagos abszolut elteres: " << atlelt << endl;
}
void koord1() {
	double x, y, r, fi;
	cout << "Adja meg a koordinatakat! \n";
	cin >> x;
	cin >> y;
	r = sqrt(pow(x, 2) + pow(y, 2));
	fi = asin(y / r) * (180 / M_PI);		//szogben, radianban nem kell a szorzas
	cout << "A pont polarkoordinatai: (" << r << ";" << fi << "ÿ)\n";
	cout << "Adja meg a polarkoordinatakat! \n";
}
void koord2(){
	double r2, fi2, x2 , y2;
	cin >> r2;
	cin >> fi2;
	fi2 = fi2 * M_PI/180;		//szogben, radianban nem kell
	x2 = cos(fi2)*r2;
	y2 = sin(fi2)*r2;
	cout << "A pont koordinatai: (" << x2 << ";" << y2 << ")\n";
}