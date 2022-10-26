#include <iostream>
#include <iomanip>
using namespace std;


int sum_uoc(int n) {
	int sum = 0;
	for (int i = 1; i < n; i++) {
		if (n % i == 0) {
			sum += i;
		}
	}
	return sum;
}


int main() {
	for (int i = 1; i < 1000; i++) {
		for (int j = i + 1; j < 1000; j++) {
			if (sum_uoc(i) == j && sum_uoc(j) == i) {
				cout << i << " " << j << endl;
			}
		}
	}

	return 0;
}