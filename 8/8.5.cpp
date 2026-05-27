#include <iostream>
using namespace std;

long long ackermann(long long m, long long n) {
    if (m == 0)
        return n + 1;
    else if (n == 0)
        return ackermann(m - 1, 1);
    else
        return ackermann(m - 1, ackermann(m, n - 1));
}

int main() {
    long long m, n;
    cout << "Введите аргументы функции\n";
    cin >> m >> n;
    cout << ackermann(m, n) << endl;
    return 0;
}