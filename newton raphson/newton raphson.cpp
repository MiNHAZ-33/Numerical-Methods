#include <bits/stdc++.h>
#define EPSILON 0.01
using namespace std;

double func(double a)
{
    return a * a * a - a * a + 2;
}

double der_func(double a)
{
    return 3 * a * a - 2 * a;
}

double newtonRaphson(double a)
{
    double h = func(a) / der_func(a);
    while (abs(h) > EPSILON)
    {
        h = func(a) / der_func(a);
        a = a - h;
    }
    return a;
}

int main()
{

    double a;
    cout << "Enter your guess value :" << endl;
    cin >> a;
    double result;
    result = newtonRaphson(a);
    if (result == 0)
    {
        cout << "Root not found";
    }
    else
    {
        cout << "Your root is : " << result << endl;
    }

    return 0;
}