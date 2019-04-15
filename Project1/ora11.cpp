#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

bool ok(int sz, int t[]) {
	for (int i = 0; i < 5; i++) {
		if (t[i] == sz) return false;
	}
}
int main() {
	cout << "Az otoslotto nyero szamai:\n";
	int nyero[5];
	srand(time(NULL));
	for (int i = 0; i < 5; i++) {
		bool voltmar = false;
		do
		{
			nyero[i] = rand() % 90 + 1 ;
			voltmar = false;
			for (int j = 0; j < i && !voltmar; j++)
				if (nyero[j] == nyero[i])
					voltmar = true;
		}while (voltmar);
 
	}

	for (int i = 0; i < 5; i++) {
		cout << nyero[i] << " ";
	}
	cout << endl;
}