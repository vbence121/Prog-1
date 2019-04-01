#include <iostream>
using namespace std;

struct Ido {
	int h, m, s;
};
void tick(Ido* t){
	(*t).s+=1;
	if ((*t).s == 60) {
		t->s = 0;
		t->m++;
	}
	if ((*t).m == 60) {
		t->m = 0;
		t->h++;
	}
	if ((*t).h == 24) {
		t->h = 0;;
	}
}

void btick(Ido* t, int sec) {
	t->s += sec;
	while (t->s >= 60) {
		t->s -= 60;
		t->m += 1;
	}
	int ora = maradekos(t->m , 60, &t->m);
	t->h += ora;
	maradekos(t->h, 24, &t->h);
}

void btickalt(Ido* t, int sec) {
	for (int i = 0; i < sec; i++) {
		tick(t);
	}
}

int maradekos(int osztando, int oszto, int* maradek) {
	*maradek = osztando % oszto;
	return osztando / oszto;
}
// ket egesz valtozo cimet kapja parameterben es ha az elso nagyobb akkor felcsereli az ertekeket
void sorbarak(int *a, int *b) {
	if (*a > *b) {
		int cs = *a;
		*a = *b;
		*b = cs;
	}
}

void buborek(int *tomb, int meret) {
	for (int i=0; i<meret;i++)
	{ 
		for (int j = 1; j < meret-i; j++)
		{
			sorbarak(&tomb[j - 1], &tomb[j]);
//			sorbarak(tomb + j - 1, tomb + j);
		}
	}
}

int main() {
// int && maradekos osztas 
/*	int var = 4;
	int* ptr = &var;
	int n1, n2;
	int *p1 = &n1, *p2 = &n2;
	cout << ptr << " cimen: " << *ptr << endl;
	var = 42;
	cout << ptr << " cimen: " << *ptr << endl;
	cout << "Adjon meg ket szamot: " << endl;
	cin >> n1 >> n2;
	int maradek;
	int hanyados = maradekos(n1, n2, &maradek);
	cout << n1 << '/' << n2 << "=" << hanyados << ", a maradek " << maradek << endl;

	cout << "Adjon meg ket szamot: " << endl;
	cin >> n1 >> n2;
	//sorbarak(&n1, &n2);
	sorbarak(p1, p2);
	cout << "Sorrendben " << n1 << " " << n2 << endl;
*/
// ido kezeles
/*	Ido obj = { 23, 58, 15 };
	for (int i = 0; i < 200; i++) {
		tick(&obj);
		cout << obj.h << ":" << obj.m << ":" << obj.s << endl;
	}
	cout << "Adja meg a kivant sec ugras meretet" << endl;
	int sec;
	cin >> sec;
	btickalt(&obj, sec);
	cout << obj.h << ":" << obj.m << ":" << obj.s << endl;
*/
// dinamikus tomb/mem kezeles


}