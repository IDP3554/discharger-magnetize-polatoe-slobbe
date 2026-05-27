#include <iostream>
#include <cmath>
using namespace std;

double sumRow(double x, double e)
{
    double sum = 0.0;
    int n = 1;
    while (true)
    {
        double term = pow(x, 2 * n - 1) / (2 * n - 1);
        if (fabs(term) < e)
            break;
        sum += term;
        n++;
    }
    return sum;
}

void sumRow(double *x, double *e, double *res)
{
    *res = 0.0;
    int n = 1;
    while (true)
    {
        double term = pow(*x, 2 * n - 1) / (2 * n - 1);
        if (fabs(term) < *e)
            break;
        *res += term;
        n++;
    }
}

double& sumRow(double &x, double &e, double &res)
{
    res = 0.0;
    int n = 1;
    while (true)
    {
        double term = pow(x, 2 * n - 1) / (2 * n - 1);
        if (fabs(term) < e)
            break;
        res += term;
        n++;
    }
    return res;
}

int main()
{
    double x = 0.20;
    double e = 0.5 * pow(10, -4);
    double s1, s2, s3;
    s1 = sumRow(x, e);
    sumRow(&x, &e, &s2);
    s3 = sumRow(x, e, s3);
    cout << "По значению: " << s1 << endl;
    cout << "По указателю: " << s2 << endl;
    cout << "По ссылке: " << s3 << endl;
    return 0;
}