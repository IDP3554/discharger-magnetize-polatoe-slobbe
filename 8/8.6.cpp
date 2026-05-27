#include <iostream>
using namespace std;

double func(double x, int a) {
    if (a == 0)
        return 1;
    if (a == 1)
        return x;
    if (a % 2 == 0) {
        double half = func(x, a / 2);
        return half * half;
    } else {
        return x * func(x, a - 1);
    }
}

int main() {
    double x;
    int a;
    cout << "Введите x и a\n";
    cin >> x >> a;
    cout << func(x, a) << endl;
    return 0;
}