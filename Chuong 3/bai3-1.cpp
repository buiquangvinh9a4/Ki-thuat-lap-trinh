#include <iostream>
using namespace std;

int main() {
	double toan, van, anh;
	cin >> toan >> van >> anh;

	double tong = toan * 2 + van * 2 + anh;

	if (tong > 25)
		cout << "Do";
	else
		cout << "Truot";

	return 0;
}