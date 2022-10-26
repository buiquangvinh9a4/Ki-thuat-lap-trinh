#include <iostream>
using namespace std;

void inputArray(float a[100][100], int m, int n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
}

void count_student_rank(float a[100][100], int m, int n) {
	int count_g = 0, count_k = 0, count_tb = 0, count_y = 0;
	for (int i = 0; i < m; i++) {
		float sum = 0, average = 0;
		for (int j = 0; j < n; j++) {
			sum += a[i][j];
		}
		average = sum / float(n);
		if (average >= 8.0) {
			count_g++;
		} else if (average >= 6.0) {
			count_k++;
		} else if (average >= 5.0) {
			count_tb++;
		} else {
			count_y++;
		}
	}
	cout << count_g << " " << count_k << " " << count_tb << " " << count_y << endl;
}


int main() {
	int m, n;
	cin >> m >> n;

	float a[100][100];
	inputArray(a, m, n);
	count_student_rank(a, m, n);
	return 0;
}