#include <iostream>
#include <string>
using namespace std;

void fel1() {
	char tomb[] = { 85, 80, 'a', 0 }; // '\0' == 0
	char cstr[] = "Hello world!";
	std::string cppstr = "Hello wilag!";
	cout << tomb << endl;
	cout << cstr << endl;
	cout << cppstr << endl;

	cppstr += " En vagyok a pc!";
	cout << cppstr << endl;

	cout << "Kerek egy stringet!" << endl;
	string input;
	cin >> input;
	cout << "A beolvasott sztring: " << input << endl;
	cout << "Kerek egy stringet!" << endl;
	string input2;
	//cin >> input2;
	cout << "A beolvasott sztring: " << input2 << endl;
	string sor;
	//cin.peek();
	cin.ignore(1000, ' ');
	//getline(cin, sor);
	getline(cin, sor);
	cout << "A beolvasott sztring " << sor << endl;
	cout << "Sor elso karaktere: " << sor[0] << endl;
	cout << "Sor hossza: " << /* sor.length << */ endl;
}

string input() {
	/* Rendszam ellenorzo
		Kerjunk be egy sztringet es mondjuk meg hogy helyes rendzsam formatumu-e 
		ABC-123*/

//	1. 7 hosszu
//	2. elso 3 karaktere nagy betu
//	3. a 4. karaktere - jel 
//	5. az utolso harom karaktere szamjegy
	int error=0;
	string input;

	do {
		cout << "Adja meg a rendszamot" << endl;
		cin >> input;
		if (input.length() != 7)
		{
			cout << "Rossz a hossz!" << endl;
			error = 1;
		}
		else {
			int i = 0;
			while (i < 2 && error == 0) {
				if (!isupper(input[i])) {		// isalpha ha nagy es kis betu is jo, isupper ha csak nagybetu
					error = 2;
					cout << "A(z) " << i + 1 << " karakter nem nagy betu!" << endl;
				}
				i++;
			}
			if (input[3] != '-') {
				error = 3;
				cout << "A 4 karakter nem '-' jel!" << endl;
			}
			i = 4;
			while (i < 6 && error == 0) {
				if (!isdigit(input[i])) {
					error = 4;
					cout << "A(z) " << i + 1 << "karakter nem szam!" << endl;
				}
				i++;
			}
		}
		if (error == 0) cout << "A rendszam helyes!" << endl;
	} while (error != 0); 
	return input;
}

int main() {
	cout << "Adja meg az elso rendszamot!" << endl;
	string rendszam1 = input();
	cout << "Adja meg az masodik rendszamot!" << endl;
	string rendszam2 = input();
	int i = 0, nagyobb = 0;
	while (nagyobb == 0 && i < 7) {
		if (rendszam1[i] > rendszam2[i]) nagyobb = 1;
		if (rendszam1[i] < rendszam2[i]) nagyobb = 2;
	}
	if (nagyobb == 1) cout << "Az elso auto ujabb!" << endl;
	else if (nagyobb == 2) cout << "Az masodik auto ujabb!" << endl;
	else if (nagyobb == 0) cout << "A ket rendszam ugyan az" << endl;
}