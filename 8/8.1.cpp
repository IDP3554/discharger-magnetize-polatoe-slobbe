#include <iostream>
using namespace std;

double sqrt_rec(double a, int tochnost) {
    if (tochnost == 0)
        return (1 + a) / 2;
    else
    {
        double x = sqrt_rec(a, tochnost - 1);
        return 0.5 * (x + a / x);
    }
}

int main() {
    double x = 2;
    cout << sqrt(x) << endl;
    int t = 6;
    cout << sqrt_rec(x, t) << endl;
}
/*
Функция sqrt_rec вычисляет квадратный корень из числа a по рекуррентной формуле Ньютона
При tochnost == 0, рекурсия останавливается и возвращается начальное приближение x_0=(1+a)/2,
а при tochnost > 0 функция сначала находит предыдущее значение x_(n−1)​, а затем по формуле строит новое приближение x_n
*/
/*
Параметр a - это число, из которого нужно извлечь квадратный корень.
Параметр tochnost - это количество рекурсивных шагов.
*/