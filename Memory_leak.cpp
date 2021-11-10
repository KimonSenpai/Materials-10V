#include <iostream>
using namespace std;


int main() {
    volatile int* p;
    while(true) {
        try {
            p = new int[200];
        }
        catch(...){
            break;
        }
    }
    system("pause");
}