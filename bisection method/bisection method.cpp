#include <bits/stdc++.h>
#define EPSILON 0.01

using namespace std;

double func(double x)
{
    return pow(x, 3) - pow(x, 2) + 2;
}

double bisectionMethod(double a, double b)
{
    double c;
    if ((func(a) * func(b) > 0))
    {
        cout << "Root is not here" << endl;
        return -1;
    }
    while ((b - a) > EPSILON)
    {
        c = (a + b) / 2;
        if (func(c) == 0)
        {
            return c;
        }
        if (func(a) * func(c) < 0)
        {
            b = c;
        }
        else
        {
            a = c;
        }
    }
    return c;
}

int main()
{

    double a, b;
    double result;

    while (a)
    {
        if (a == 'x')
        {
            return 0;
        }
        cout << "Enter the roots a and b" << endl;
        cin >> a >> b;

        result = bisectionMethod(a, b);
        if (result != -1)
        {

            cout << "Your root is: " << result << endl;
        }
    }

    return 0;
}