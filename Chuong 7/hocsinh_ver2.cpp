#include <iostream>
#include <iomanip>
using namespace std;


 

int main() {
    int m, n;
    float a[100][100];

    cin >> m >> n;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    float b[100];  // mang luu tru diem trung binh

    // tinh diem trung binh va luu vao b
    for (int i = 0; i < m; i++) {
        float sum = 0, average = 0;
        for (int j = 0; j < n; j++) {
            sum = sum + a[i][j];
        }
        average = sum / float(n);
        b[i] = average;
    }


    float max = b[0], min = b[0];
    // tim max, min
    for (int i = 0; i < m; i++) {
        if (b[i] > max) {
            max = b[i];
        }
        if (b[i] < min) {
            min = b[i];
        }
    }

    cout << setprecision(2);
    cout << min << " " << max;
    
    return 0;
}

