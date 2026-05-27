#include <iostream>
using namespace std;

void reversed_print(int a[], int n) {
    if (n == 0)
        return;
    cout << a[n - 1] << " ";
    reversed_print(a, n - 1);
}

int main() {
    int n;
    cout << "Введите кол-во элементов массива: ";
    cin >> n;
    int a[100];
    cout << "Введите элементы массива\n";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    reversed_print(a, n);
    return 0;
}