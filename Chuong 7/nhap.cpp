#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void inputVector(vector<int> &V, long long int A) {
	while (A > 0) {
		int tmp = A % 10;
		A = A / 10;
		V.push_back(tmp);
	}
}

void editVector(vector<int> &V, int n) {
	while (n > 0) {
		V.push_back(0);
		n--;
	}
}

void showVector(vector<int> &V) {
	for (int i = V.size() - 1; i >= 0; i--)
		cout << V[i];
	cout << endl;
}

int max(int a, int b) {
	if (a >= b)
		return a;
	return b;
}

int main() {
	long long int a, b;
	cin >> a >> b;

	long long int A = a, B = b;
	vector<int> V_A, V_B, V_sum;
	inputVector(V_A, A);
	inputVector(V_B, B);


	int len = max(V_A.size(), V_B.size()), nho = 0;
	if (V_A.size() > V_B.size()) {
		editVector(V_B, V_A.size() - V_B.size());
	} else {
		editVector(V_A, V_B.size() - V_A.size());
	}

	for (int i = 0; i < len; i++) {
		if (i == len - 1) {
			V_sum.push_back(V_A.at(i) + V_B.at(i) + nho);
		} else {
			int sum = (V_A.at(i) + V_B.at(i) + nho) % 10;
			nho = (V_A.at(i) + V_B.at(i) + nho) / 10;
			V_sum.push_back(sum);
		}
		

	}


	showVector(V_sum);


	return 0;
}