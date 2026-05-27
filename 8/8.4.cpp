#include <iostream>
using namespace std;

void check(int n) {
    if (n == 1) {
        cout << "YES";
        return;
    }
    if (n % 2 != 0) {
        cout << "NO";
        return;
    }
    check(n / 2);
}

int main() {
    int N;
    cout << "Введите число: ";
    cin >> N;
    check(N);
    return 0;
}