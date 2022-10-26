#include <bits/stdc++.h>
using namespace std;


int reverse(int n) {
	int number_reverse = 0;
	while (n > 0) {
		int unit = n % 10;
		n /= 10;
		number_reverse = number_reverse * 10 + unit;
	}
	return number_reverse;
}


int main() {
	int n;
	cin >> n;

	if (n == reverse(n))
		cout << "true";
	else
		cout << "false";
	return 0;
}