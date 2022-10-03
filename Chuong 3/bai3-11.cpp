#include <iostream>
using namespace std;

int main() {
	float a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;

	float max = a;
	if (max < b)
		max = b;
	if (max < c)
		max = c;
	if (max < d)
		max = d;
	if (max < e)
		max = e;

	float min = a;
	if (min > b)
		min = b;
	if (min > c)
		min = c;
	if (min > d)
		min = d;
	if (min > e)
		min = e;	

	float max2 = min;
	if (max2 < a && a != max)
		max2 = b;
	if (max2 < b && b != max)
		max2 = b;
	if (max2 < c && c != max)
		max2 = c;
	if (max2 < d && d != max)
		max2 = d;
	if (max2 < e && e != max)
		max2 = e;	

	cout << max << " " << max2;

	return 0;
}