#include <iostream>
using namespace std;


int main() {
    int a = 5;
    size_t s;
    cout << &a << ' ' << &a + 1 << '\n';
    cout << sizeof(int*) << '\n';
}