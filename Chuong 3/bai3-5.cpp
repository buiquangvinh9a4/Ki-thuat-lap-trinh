#include <iostream>
using namespace std;

int main() {
	double toan, van, anh;
	cin >> toan >> van >> anh;

	double trungbinh = (toan + van + anh) / 3.0;
	if ((toan >= 0 && toan <= 10) && (van >= 0 && van <= 10) && (anh >= 0 && anh <= 10)) {
		if (trungbinh >= 8.0 && trungbinh <= 10)
			cout << "Gioi";
		else if (trungbinh >= 6.0)
			cout << "Kha";
		else if (trungbinh >= 4.0)
			cout << "Trung binh";
		else
			cout << "Yeu";
	} else {
		cout << "Loi nhap du lieu";
	}

	

	return 0;
}