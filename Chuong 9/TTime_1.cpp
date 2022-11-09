#include <iostream>
using namespace std;

class TTime {
private:
    int h, m, s;
public:
    void input() {
        cin >> h >> m >> s;
    }
    void output() {
        cout << h << " " << m << " " << s << endl;
    }
    bool sosanh(TTime &t) {
       if (h >= t.h && m >= t.m && s > t.s) {
            return true;
       } else if (h >= t.h && m > t.m) {
            return true;
       } else if (h > t.h) {
            return true;
       }
        return false;
    }
};

void swap(TTime &t1, TTime &t2) {
    TTime tmp = t1;
    t1 = t2;
    t2 = tmp;
}

int main() {
    TTime t1, t2, t3;
    t1.input();
    t2.input();
    t3.input();
    TTime min = t1;
    if (min.sosanh(t2) == true)
        min = t2;
    if (min.sosanh(t3) == true)
        min = t3;
    min.output();   
    
    return 0;
}