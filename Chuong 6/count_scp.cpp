#include <bits/stdc++.h>
using namespace std;


bool isPerfectSquare(int n) {
	int sqr = sqrt(n);
	if (sqr * sqr == n)
		return true;
	return false;
}


int main() {
	int n;
	cin >> n;

	int count = 0;
	for (int i = 1; i < n; i++) {
		if (isPerfectSquare(i))
			count++;
	}
	cout << count;
	return 0;
}