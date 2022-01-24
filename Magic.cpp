#include <iostream>
using namespace std;

int main() {
    volatile int a = 1, b = 2, c = 3;

    //cout << &a << ' ' << &b << ' ' << &c << '\n';
    cout << a << ' ' << b << ' ' << c << '\n';
    volatile int* p = &a + (&c - &a) / 2;
    //cout << *p << '\n';
    *p = 7;
    cout << a << ' ' << b << ' ' << c << '\n';
}