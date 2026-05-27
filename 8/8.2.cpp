#include <iostream>
using namespace std;

double prod(int n) {
    if (n == 2)
        return (2.0 / 1) * (2.0 / 3);
    return prod(n - 2) * (1.0 * n / (n - 1)) * (1.0 * n / (n + 1));
}

int main() {
    int n;
    cout << "Введите кол-во сомножителей: ";
    cin >> n;
    if (n < 2 || n % 2 != 0) {
        cout << "n должно быть четным и >= 2\n";
        return 0;
    }
    cout << prod(n) << endl;
    return 0;
}