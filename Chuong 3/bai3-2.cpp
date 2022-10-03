#include <iostream>
using namespace std;

int main() {
	int tuoi_A, tuoi_B;
	cin >> tuoi_A >> tuoi_B;

	if (tuoi_A > tuoi_B)
		cout << "A la anh, B la em";
	else if (tuoi_A < tuoi_B)
		cout << "A la em, B la anh";
	else
		cout << "A va B la ban be";

	return 0;
}