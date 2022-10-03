#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int number;
	cin >> number;

	bool check = true;

	if (number < 2) {
		check = false;
	} else {
		int tmp = sqrt(number);
		for (int i = 2; i <= tmp; i++) {
			if (number % i == 0) {
				check = false;
				break;
			}
		}
	}

	if (check) {
		cout << "YES";
	} else {
		cout << "NO";
	}

	return 0;
}