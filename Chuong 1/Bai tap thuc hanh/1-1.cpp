#include <iostream>
#include <cmath>    // khai bao thu vien cmath lay ham sqrt

/*
    sqrt(x): ham lay can bac hai cua x
 */

using namespace std;

int main() {
    float h, v, g = 9.8;
    cin >> h;

    // Tinh van toc theo cong thuc v^2 = 2gh <=> v = sqrt(2gh)
    v = sqrt(2 * g * h);
    
    cout << v;
    return 0;
}