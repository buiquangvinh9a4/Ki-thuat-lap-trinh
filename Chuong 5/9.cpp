#include <iostream>
using namespace std;


int main() {
	int n;
	do {
		cin >> n;
	} while (n < 0 || n > 1000);

	for (int i = 1; i <= n; i++) {
		if (i % 5 == 0) {
			cout << i << " ";
		}
	}
}