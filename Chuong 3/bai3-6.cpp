#include <iostream>
using namespace std;

int main() {
	int sodien;
	cin >> sodien;

	int tien = 0;

	if (sodien >= 0 && sodien <= 50)
		tien = sodien * 1678;
	else if (sodien <= 100)
		tien = 50  * 1678 + (sodien - 50) * 1734;
	else if (sodien <= 200)
		tien = 50 * 1678 + 50 * 1734 + (sodien - 100) * 2014;
	else if (sodien <= 300)
		tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + (sodien - 200) * 2536;
	else if (sodien <= 400)
		tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (sodien - 300) * 2834;
	else
		tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (sodien - 400) * 2927; 

	cout << tien;
	

	return 0;
}