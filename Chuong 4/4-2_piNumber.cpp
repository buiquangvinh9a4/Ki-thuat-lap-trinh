#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;
	cin >> n;

	float pi, sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += 1.0 / (i * i);
	}

	pi = sqrt(sum * 6);
	cout << pi;
	return 0;
}