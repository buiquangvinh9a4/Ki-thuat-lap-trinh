#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


int main() {
	int a, b, c;
	cin >> a >> b >> c;

	if (a == 0) {
		cout << "PT khong phai bac 2";
	} else {
		cout << fixed << setprecision(2);
		int delta = b * b - 4 * a * c;
		if (delta < 0) {
			cout << "Vo nghiem";
		} else if (delta == 0) {
			float x = -b / float(2 * a);
			cout << "Co nghiem kep: " << x;
		}
		else {
			float x1 = (-b + sqrt(delta))/ float(2 * a);
			float x2 = (-b - sqrt(delta))/ float(2 * a);
			cout << "Co hai nghiem phan biet: " << x1 << " " << x2;
		}
	}
}