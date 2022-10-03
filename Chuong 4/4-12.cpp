#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int M;
	cin >> M;

	// dem so luong cac chu so co trong M
	int k = 0, N = M;
	while (N > 0) {
		N /= 10;
		k++;
	}


	// tinh tong luy thua cac chu so co trong M
	N = M;
	int sum = 0;
	while (N > 0) {
		int tmp = N % 10;
		N /= 10;
		sum += pow(tmp, k);
	}


	// So sanh M voi Sum theo dieu kien de bai
	if (M == sum) {
		cout << "YES";
	} else {
		cout << "NO";
	}

	return 0;
}