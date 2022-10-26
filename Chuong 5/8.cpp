#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	int i;
	int s = a * b * c * d;
	for (i = a; i <= s; i++) {
		if (i % a == 0 && i % b == 0 && i % c == 0 && i % d == 0) {
			break;
		}
	}
	cout << i;
}