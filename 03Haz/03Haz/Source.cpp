#include <iostream>

using namespace std;

int main() {
	int w, h;
	cin >> w >> h;
	int row = 0, col;
	// hazteto
	if (w == h) {
		row = h / 2;
		while (row > 0) {
			col = w - 1;
			while (col > 0) {
				if (col == row || w - col == row)
					cout << 'X';
				else
					cout << ' ';
				col--;
			}
			cout << endl;
			row--;
		}
	}
	row = 0;
	while (row < h) {
		col = 0;
		while (col < w) {
			if (row == 0 || row == h - 1 || col == 0 || col == w - 1)
				cout << 'X';
			else if ((row == col || h-row-1 == col) && w == h)	// atlo
				cout << 'X';
			else
				cout << ' ';
			col++;
		}
		cout << endl;
		row++;
	}
}