#include <iostream>
using namespace std;

int main() {
    int hour, pricePerHour;
    cin >> hour >> pricePerHour;

    int totalAmount = hour * pricePerHour;

    cout << totalAmount;

    return 0;
}