#include <iostream>
using namespace std;

int main() {
	int m, y;
	cin >> m >> y;

	bool isLeapYear = ((y % 4 == 0 && y % 100 != 0) || (y % 4 == 0)) ? 1 : 0;

	int m1, y1;
	if (m == 1 || m == 2) {
		m1 = m + 12;
		y1 = y - 1;
	} else {
		m1 = m;
		y1 = y;
	}

	int c, k, DOW;
	c = y1 / 100;
	k = y1 % 100;
	DOW = (1 + ((26 * (m1 + 1)) / 10) + k + (k / 4) + (c / 4) + (5 * c)) % 7;

	int day = 31;
	if (m1 == 4 || m1 == 6 || m1 == 9 || m1 == 11) {
		day = 30;
	} else if (m1 == 2){
		day = (isLeapYear == 1) ? 29 : 28;
	}

	cout << "CN\tT2\tT3\tT4\tT5\tT6\tT7\n";
	if (DOW == 0) {
		DOW = 7;
	}
	
	int i;
	for (i = 1; i < DOW; i++) {
		cout << "\t";
	}

	for (int x = 1; x <= day; x++) {
		cout << x << "\t";
		i++;
		if (i > 7) {
			i = 1;
			cout << endl;
		}
	}



	return 0;
}