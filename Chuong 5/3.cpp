#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


int main() {
	float toan, van, anh;
	cin >> toan >> van >> anh;

	float s = toan * 2 + van * 2 + anh;
	if (s >= 25) {
		cout << "Do";
	} else {
		cout << "Truot";
	}
}