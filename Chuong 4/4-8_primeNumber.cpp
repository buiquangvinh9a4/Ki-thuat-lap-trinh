#include <iostream>
#include <cmath>
using namespace std;

/*
    pow(x, y): ham tinh x mu y
    sqrt(x)  : ham tinh can bac hai cua x

 */

int main() {
	int n;
	do {
		cin >> n;
	} while (n < 0 || n > 10000);

	for (int i = 2; i < n; i++) {
		bool check = true;
		if (i < 2) {
			check = false;
			continue;
		} else {
			int tmp = sqrt(i);
			for (int j = 2; j <= tmp; j++) {
				if (i % j == 0) {
					check = false;
					break;
				}
			}
		}
		if (check) {
			cout << i << " ";
		}
	}

	return 0;
}