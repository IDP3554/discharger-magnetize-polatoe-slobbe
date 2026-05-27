#include <iostream>
#include <cmath>
using namespace std;

double min(double a[], int n)
{
    double mn = a[0];
    for (int i = 1; i < n; i++)
        if (a[i] < mn)
            mn = a[i];
    return mn;
}
double max(double a[], int n)
{
    double mx = a[0];
    for (int i = 1; i < n; i++)
        if (a[i] > mx)
            mx = a[i];
    return mx;
}
double min(double a[], int n, double b[], int m)
{
    return min(a, n) * min(b, m);
}
double max(double a[], int n, double b[], int m)
{
    return sqrt(max(a, n) * max(b, m));
}

int main()
{
    int n, m;
    cout << "Введите размер первого массива: ";
    cin >> n;
    double* a = new double[n];
    cout << "Введите элементы первого массива:\n";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << "Введите размер второго массива: ";
    cin >> m;
    double* b = new double[m];
    cout << "Введите элементы второго массива:\n";
    for (int i = 0; i < m; i++)
        cin >> b[i];
    double pMin = min(a, n, b, m);
    double gMax = max(a, n, b, m);
    cout << "Произведение минимумов = " << pMin << endl;
    cout << "Среднее геометрическое максимумов = " << gMax << endl;
    delete[] a;
    delete[] b;
    return 0;
}