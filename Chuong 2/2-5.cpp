#include <iostream>
using namespace std;

int main() {
    double duong_kinh, dientich_1con;
    cin >> duong_kinh >> dientich_1con;

    // Do dai day thep gai -> 3 vong 
    float chuvi = duong_kinh * 3.14;
    cout << chuvi * 3 << endl;

    // Tinh so luong bo
    float dientich = 3.14 * (duong_kinh / 2.0) * (duong_kinh / 2.0);
    float soluongbo = dientich / dientich_1con;
    cout << int(soluongbo) << endl;

    return 0;
}