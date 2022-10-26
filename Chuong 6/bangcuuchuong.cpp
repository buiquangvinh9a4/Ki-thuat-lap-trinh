#include <iostream>
#include <iomanip>
using namespace std;


void tich(int n) {
	cout << setw(3) << right << n << "|    ";
	for (int i = 1; i <= 10; i++) { 
		cout << setw(8) << left << n * i;
	}
	cout << endl;
}

int main() {
	cout << "  x|    1       2       3       4       5       6       7       8       9       10\n";
	cout << "---|------------------------------------------------------------------------------" << endl;
	for (int i = 1; i <= 10; i++) {
		tich(i);
	}

	return 0;
}