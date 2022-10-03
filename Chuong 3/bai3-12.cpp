#include <iostream>
using namespace std;

int main() {
	float a, b, c;
	cin >> a >> b >> c;

	if (a > b) {
		float tmp = a;
		a = b;
		b = tmp;
	}

	if (a > c) {
		float tmp = a;
		a = c;
		c = tmp;
	}

	if (b > c) {
		float tmp = b;
		b = c;
		c = tmp;
	}

	cout << a << " " << b << " " << c;
	return 0;
}