#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
	float a, b, c;
	cin >> a >> b >> c;

	float denta = b * b - 4 * a * c;
	cout << fixed << setprecision(2);
	if (denta < 0 || a == 0) {
		cout << -1;
	} else if (denta == 0) {
		float x = -b / (2 * a);
		cout << x;
	} else {
		float x1 = (-b + sqrt(denta)) / (2 * a);
		float x2 = (-b - sqrt(denta)) / (2 * a);
		cout << x1 << " " << x2;
	}
	return 0;
}