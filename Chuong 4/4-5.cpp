#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int sa = 0, sb = 0;
	float sc = 0, sd = 0;

	// tinh sa
	for (int i = 1; i <= n; i++) {
		sa += i;
		sb += i * i;
	}

	// tinh sb
	for (int i = 1; i <= n; i++) {
		sb += i * i;
	}

	// tinh sc
	for (int i = 1; i <= n; i++) {
		sc += 1.0 / i;
	}

	// tinh sd
	for (int i = 0; i <= n; i++) {
		sd += 1.0 / (2 * i + 1);
	}


	cout << sa << endl;
	cout << sb << endl;
	cout << sc << endl;
	cout << sd << endl;
	return 0;
}