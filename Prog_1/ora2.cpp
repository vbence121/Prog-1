//ora 2
#include <iostream>
using namespace std;
int main() {

	int sz = 1, max = 20;
	while (sz <= max) {
		if (sz % 3 == 0 && sz % 5 == 0) { cout << sz << " Fizz-Fuzz \n"; }
		else if ((sz % 3) == 0) { cout << sz << " Fizz \n"; }
		else if ((sz % 5) == 0) { cout << sz << " Fuzz \n"; }
		sz = sz + 1;
	}

}