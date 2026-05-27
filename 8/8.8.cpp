#include <iostream>
using namespace std;

void solve(int maxVal, int count) {
    int n;
    cin >> n;
    if (n == 0) {
        cout << count << endl;
        return;
    }
    if (n > maxVal)
        solve(n, 1);
    else if (n == maxVal)
        solve(maxVal, count + 1);
    else
        solve(maxVal, count);
}
int main() {
    int n;
    cout << "Введите первый символ последовательности: ";
    cin >> n;
    cout << "Введите остальные символы последовательности (для окончания ввода введите 0)\n";
    solve(n, 1);
    return 0;
}