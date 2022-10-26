#include <iostream>
#include <cmath>
using namespace std;

bool isPrimeNumber(int n) {
	if (n < 2)
		return false;
	else {
		for (int i = 2; i < n; i++) {
			if (n % i == 0) {
				return false;
			}
		}
	}
	return true;
}


int main() {
	int n;
	cin >> n;

	if (isPrimeNumber(n))
		cout << "true";
	else
		cout << "false";
	return 0;
}