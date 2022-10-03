#include <iostream>
using namespace std;

int main() {
	int m, y;
	cin >> m >> y;

	// kiem tra nam nhuan
	bool isLeapYear = ((y % 4 == 0 && y % 100 != 0) || (y % 4 == 0)) ? true : false;

	// kiem tra truong hop dac biet: thang 1, 2 coi nhu thang 13, 14 nam truoc
	int m1, y1;
	if (m == 1 || m == 2) {
		m1 = m + 12;
		y1 = y - 1;
	} else {
		m1 = m;
		y1 = y;
	}

	// tinh ngay dau tien cua thang dua vao cong thuc DOW
	int c, k, DOW;
	c = y1 / 100;
	k = y1 % 100;
	DOW = (1 + ((26 * (m1 + 1)) / 10) + k + (k / 4) + (c / 4) + (5 * c)) % 7;

	// kiem tra thang co bao nhieu ngay
	int day = 31;
	if (m1 == 4 || m1 == 6 || m1 == 9 || m1 == 11) {
		day = 30;
	} else if (m1 == 2){
		day = (isLeapYear == true) ? 29 : 28;
	}

	// in ra lich 
	cout << "CN\tT2\tT3\tT4\tT5\tT6\tT7\n";
	if (DOW == 0) {
		DOW = 7;
	}
	
	// in ra khoang trang dau tab dong dau tien
	int i;
	for (i = 1; i < DOW; i++) {
		cout << "\t";
	}

	// in tu ngay dau tien den het 
	for (int x = 1; x <= day; x++) {
		cout << x << "\t";
		i++;
		if (i > 7) {
			i = 1;
			cout << endl;
		}
	}



	return 0;
}