#include <iostream>
using namespace std;

void swal(int *x, int *y)
{
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
}

int main()
{
    int a = 5, b = 9;
    cout << "До обмена: a = " << a << ", b = " << b << endl;
    swal(&a, &b);
    cout << "После обмена: a = " << a << ", b = " << b << endl;
    return 0;
}