#include <iostream>
#include <cmath>
using namespace std;

int Quadro(double a, double, double, double&, double&);

int main() {
    double A, B, C;
    cin >> A >> B >> C;
    double x1, x2;

    int count = Quadro(A, B, C, x1, x2);

    if(count == 0) {
        cout << "No roots\n";
    } else if(count == 1) {
        cout << x1 << '\n';
    } else if(count == 2) {
        cout << x1 << ' ' << x2 << '\n';
    } else {
        cout << "Real\n";
    }
}

int Quadro(double a, double b, double c, double& x1, double& x2) {
    if(a == 0) {
        if(b == 0) {
            if(c == 0) {
                return 3;
            } else {
                return 0;
            }
        } else {
            x1 = -c / b;
            return 1;
        }
    } else {
        double D = b*b - 4*a*c;

        if(D < 0) {
            return 0;
        }

        if(D == 0) {
            x1 = -b / 2 / a;
            return 1;
        }

        x1 = (-b - sqrt(D))/2/a;
        x2 = (-b + sqrt(D))/2/a;
        return 2;
    }
}
