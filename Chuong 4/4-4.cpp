#include <iostream>
using namespace std;


int main() {
	int number;
	cin >> number;

	bool check = true;

	if (number < 2) {
		check = false;
	} else {
		for (int i = 2; i < number; i++) {
			if (number % i == 0) {
				check = false;
				break;
			}
		}
	}

	if (check == true) {
		cout << "YES";
	} else {
		cout << "NO";
	}

	return 0;
}