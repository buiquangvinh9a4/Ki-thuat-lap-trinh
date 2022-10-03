#include <iostream>
using namespace std;

int main() {
	int number;
	cin >> number;

	if (number % 2 == 0) {
		cout << "So chan" << endl;
	} else {
		cout << "So le" << endl;
	}

	if (number > 0) {
		cout << "So nguyen duong";
	} else if (number < 0) {
		cout << "So nguyen am";
	} else {
		cout << "Khong duong khong am";
	}

	return 0;
}