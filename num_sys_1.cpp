/* x_10 -> y_q, q <= 10*/

#include <iostream>
using namespace std;


int main() {
    int x, q;
    cin >> x >> q;
    if(x == 0) {
        cout << 0 << '\n';
        return 0;
    }
    int xx = x, c = 0;
    while (xx > 0) {
        c++;
        xx /= q;
    }

    int* digs = new int[c];
    xx = x;
    for(int i = c - 1; i >= 0; i--) {
        digs[i] = xx % q;
        xx /= q;
    }

    for(int i = 0; i < c; i++) {
        cout << digs[i];
    }

    cout << '\n';
}