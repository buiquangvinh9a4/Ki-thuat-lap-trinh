#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

struct Tpoint {
	int x;
	int y;
};

int main() {
	Tpoint A, B;
	cin >> A.x >> A.y;
	cin >> B.x >> B.y;

	float s = sqrt((A.x - B.x) * (A.x - B.x) + ((A.y - B.y)) * (A.y - B.y));
	cout << fixed << setprecision(2) << s * 5;

}