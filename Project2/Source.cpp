#include <iostream>
#include <string>
using namespace std;

int main() {
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

	return 0;
}