#include <iostream>
using namespace std;

int main() {
    float F, toC;
    cin >> F;
    toC = (F - 32) / (9.0 / 5);
    cout << toC;

    float  C, toF;
    cin >> C;
    toF = (9.0 / 5) * C + 32;
    cout << toF;

    return 0;
}