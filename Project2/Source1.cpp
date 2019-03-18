#include <iostream>
#include <cmath>
using namespace std;

/*void vonal(void) {
	cout << "----------------------------\n";
}	*/
//kiir c char bol hossz db-t
void vonal(char c = '-' , int hossz=10,bool sortores = true) {
	for (int i = 0; i < hossz; i++) {
		cout << c;
	}
if (sortores) cout << endl;
};

void drawSin(double d = 0.1, double x_max=10, int w = 100) {

	int i = 0;
	while (i*d <= x_max) {
		double x = i * d, sinx = sin(x);
		if (sinx > 0) {
			vonal(' ', w / 2, false);
			vonal('S', sinx*w / 2);
			
		}
		else {
			int szeles = -sinx * w / 2;
			vonal(' ', (w/2-szeles), false);
			vonal('S', szeles);
		}
		i++;
	}
};


//sin rajz
int main2() {

	vonal('*');
	cout << "Hello world!\n";
	vonal();
	for (int i = 80; i < 120; i++) {
		vonal('*',i);
	}
	drawSin(0.1, 9.4, 70);
	return 0;
}

bool MEG = true;

double calc(double A, double B, char op) {
	switch (op)
	{
	case '+': return A + B; break;
	case '-': return A - B; break;
	case '*': return A * B; break;
	case '/': return A / B; break;
	case '^': return pow(A ,B); break;
	case 'V': MEG = false;
	}
}


int main() {
	while (MEG) {
		double A, B, R;
		char op;
		cin >> A >> op >> B;
		R = calc(A, B, op);
		if (MEG == false) return 0;
		cout << A << op << B << '=' << R << endl;
	}
}