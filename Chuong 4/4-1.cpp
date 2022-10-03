#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int number;
	cin >> number;

	int sum = 0;
	while (number > 0) {
		int tmp = number % 10;
		number /= 10;
		sum += tmp;
	}

	cout << sum; 
	return 0;
}