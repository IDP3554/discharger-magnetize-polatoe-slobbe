#include <iostream>
#include <cmath>
using namespace std;

float f1(float x)
{
    return sin(x) / x;
}
float f2(float y)
{
    return y * y + 2 * pow(y, 1.5);
}
float f3(float z)
{
    return (z + 2) * (z + 1) * z;
}
void print(float x, float (*y)(float))
{
    cout << "f(" << x << ") = " << y(x) << endl;
}
int main()
{
    float x = 0.6f, y = 0.3f, z = 0.1f;
    float R = f1(x) + f2(y) * f3(f2(z));
    cout << "R = " << R << endl;
    print(x, f1);
    print(y, f2);
    print(z, f2);
    return 0;
}