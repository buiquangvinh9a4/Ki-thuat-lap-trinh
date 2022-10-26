#include <iostream>
using namespace std;

void inputArray(int a[100][100], int m, int n) {
     // nhap mang 2 chieu
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
}

void showArray(int a[100][100], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
 

int main() {
    int m, n, a[100][100], b[100][100];
    cin >> m >> n;

    inputArray(a, m, n);
    inputArray(b, m, n);

    int c[100][100];  // mang tong cua 2 mang a va b
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    showArray(c, m, n);

    
    return 0;
}

