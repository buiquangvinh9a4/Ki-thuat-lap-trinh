#include <iostream>
using namespace std;

int main() {
	double toan, van, anh;
	cin >> toan >> van >> anh;

	double max_diem = toan;

	if (max_diem < van)
		max_diem = van;
	if (max_diem < anh)
		max_diem = anh;

	cout << max_diem;
	return 0;
}