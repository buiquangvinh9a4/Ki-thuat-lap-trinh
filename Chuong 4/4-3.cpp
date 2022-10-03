#include <iostream>
using namespace std;

int main() {
	int a, b, c, d, i;
	cin >> a >> b >> c >> d;

	long n = a * b * c * d;
	for (i = a; i <= n; i++) {
		if (i % a == 0 && i % b == 0 && i % c == 0 && i % d == 0) {
			break;
		}
	}

	cout << i;

	return 0;
}