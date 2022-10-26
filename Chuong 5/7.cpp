#include <iostream>
#include <cmath>
using namespace std;


int main() {
	int n;
	cin >> n;

	for (int i = 2; i < n; i++) {
		bool check = true;
		if (i < 2) {
			check = false;
		} else {
			for (int j = 2; j < i; j++) {
				if (i % j == 0) {
					check = false;
				}
			}
		}
		if (check) {
			cout << i << " ";
		}
	}
}