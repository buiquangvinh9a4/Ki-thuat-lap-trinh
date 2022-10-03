#include <iostream>
using namespace std;


int main() {
	int n;
	do {
		cin >> n;
	} while (n < 0 || n > 10000);

	for (int i = 2; i < n; i++) {
		bool check = true;
		if (i < 2) {
			check = false;
		} else {
			for (int j = 2; j < i; j++) {
				if (i % j == 0) {
					check = false;
					break;
				}
			}
		}
		if (check == true) {
			cout << i << " ";
		}
	}

	return 0;
}