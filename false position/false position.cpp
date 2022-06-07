#include <bits/stdc++.h>
#define EPSILON 0.01
using namespace std;

double func(double x)
{
    return x * x * x - x * x + 2;
}

double falsePosition(double a, double b)
{
    if ((func(a) * func(b)) > 0)
    {
        return 0;
    }
    while ((a - b) > EPSILON)
    {
        double c = (a * func(b) - b * func(a)) / (func(b) - func(a));
        if (func(c) == 0)
        {
            return c;
        }
        if ((func(a) * func(c)) < 0)
        {
            b = c;
        }
        else
        {
            a = c;
        }
    }
    return -1;
}

int main()
{

    double a, b;
    cin >> a >> b;
    double result;
    result = falsePosition(a, b);
    if (result == 0)
    {
        cout << "Root not found" << endl;
    }
    else
    {
        cout << "Root is : " << result << endl;
    }
    return 0;
}