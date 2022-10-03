#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int sa = 0, sb = 0;
	for (int i = 1; i <= n; i++) {
		sa += i;
		sb += i * i;
	}

	float sc = 0, sd = 0;
	for (int i = 1; i <= n; i++) {
		sc += 1.0 / i;
	}
	for (int i = 0; i <= n; i++) {
		sd += 1.0 / (2 * i + 1);
	}


	cout << sa << endl;
	cout << sb << endl;
	cout << sc << endl;
	cout << sd << endl;
	return 0;
}