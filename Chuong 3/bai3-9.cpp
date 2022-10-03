#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

/*
    pow(x, y): ham tinh x mu y
    sqrt(x)  : ham tinh can bac hai cua x
	thu vien iomanip: lay ham fixed va setprecision(n) lam tron den n chu so thap phan
 */

int main() {
	float a, b, c;
	cin >> a >> b >> c;

	float delta = b * b - 4 * a * c;
	cout << fixed << setprecision(2);
	if (delta < 0 || a == 0) {
		cout << -1;
	} else if (delta == 0) {
		float x = -b / (2 * a);
		cout << x;
	} else {
		float x1 = (-b + sqrt(delta)) / (2 * a);
		float x2 = (-b - sqrt(delta)) / (2 * a);
		cout << x1 << " " << x2;
	}
	return 0;
}