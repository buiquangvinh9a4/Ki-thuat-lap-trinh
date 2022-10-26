#include <iostream>
using namespace std;
 

int main() {

    // tim max, min cua mang 1 chieu
    int n, a[1000];
    cin >> n;

    // nhap mang
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int max = a[0], min = a[0];

    // tim max, min
    for (int i = 0; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
        if (a[i] < min) {
            min = a[i];
        }
    }
    
    cout << min << " " << max << endl;

    return 0;
}

