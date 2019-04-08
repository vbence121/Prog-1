#include <iostream>
#define S 7
using namespace std;

/*void f(int tomb[][5]) { // 5 hosszu tömbök tömbje

}*/

int main() {
	// lokalos tömb
	/*
		int lokalis[S][S];
		lokalis[0][0] = 1;
		for (int sor = 0; sor < S; ++sor) {
			lokalis[sor][0] = lokalis[sor][sor] = 1;
			for (int oszl = 1; oszl < sor; ++oszl) {
				lokalis[sor][oszl] = lokalis[sor - 1][oszl - 1] + lokalis[sor - 1][oszl];
			}
		}
		for (int sor = 0; sor < S; ++sor) {
			for (int i = 0; i < S - 1 - sor; i++)
				cout << " ";
			for (int oszl = 0; oszl <= sor; ++oszl) {
				cout << lokalis[sor][oszl] << " ";
			}
			cout << endl;
		}
	*/

	cout << "Adja meg a magassagot!" << endl;
	int magas;
	cin >> magas;
	int **din = new int*[magas];
	/*for (int i = 0; i<magas; i++)	{
		din[i] = new int[i + 1];
	}		 */
	int* egydim = new int[((magas + 1)*magas)/2];
	int eleje = 0;
for (int sor = 0; sor < magas; sor++) {
		din[sor] = &egydim[eleje];			// din[sor] = egydim + eleje;
		eleje += sor + 1;
}
	din[0][0] = 1;
for (int sor = 0; sor < magas; ++sor) {
		din[sor][0] = din[sor][sor] = 1;
		for (int oszl = 1; oszl < sor; ++oszl) {
			din[sor][oszl] = din[sor - 1][oszl - 1] + din[sor - 1][oszl];
		}
	}
for (int sor = 0; sor < magas; ++sor) {
		for (int i = 0; i < magas - 1 - sor; i++)
			cout << " ";
		for (int oszl = 0; oszl <= sor; ++oszl) {
			cout << din[sor][oszl] << " ";
		}
		//delete din[sor];
		cout << endl;
	}
	delete[] din;
	delete[] egydim;

}