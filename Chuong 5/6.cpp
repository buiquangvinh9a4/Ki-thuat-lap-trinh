#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


int main() {
	int n;
	cin >> n;

	int f1 = 1, f2 = 1;
	for (int i = 1; i <= n; i++) {
		if (i == 1 || i == 2) {
			cout << f1 << " ";
		} else {
			int f3 = f1 + f2;
			cout << f3 << " ";
			f3 = f2;
			f2 = f1;

		}
	}
}