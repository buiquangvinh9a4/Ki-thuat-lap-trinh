#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int M;
	cin >> M;

	int k = 0, N = M;
	while (N > 0) {
		N /= 10;
		k++;
	}

	N = M;
	int sum = 0;
	while (N > 0) {
		int tmp = N % 10;
		N /= 10;
		sum += pow(tmp, k);
	}

	if (M == sum) {
		cout << "YES";
	} else {
		cout << "NO";
	}

	return 0;
}