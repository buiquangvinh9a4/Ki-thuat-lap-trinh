#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
	int n;
	cin >> n;

	float s1 = 0;
	for (int i = 1; i <= n; i++) {
		s1 += 1.0 / (i * (i + 1));
	}

	float s2 = 0;
	for (int i = 1; i <= n; i++) {
		s2 = sqrt(s2 + 3);
	}

	float s3 = 0, s_tmp = 0;
	for (int i = 1; i <= n; i++) {
		s_tmp += i;
		s3 += 1.0 / s_tmp;
	}

	cout << fixed << setprecision(3);
	cout << s1 << " " << s2 << " " << s3;
	return 0;
}