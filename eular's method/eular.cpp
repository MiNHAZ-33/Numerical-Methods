#include <iostream>
using namespace std;

double func(double x, double y)
{
    return x + y + x * y;
}

void euler(double x0, double y, double h, double x)
{
    double temp = 0;
    while (x0 < x)
    {
        temp = y;
        y = y + h * func(x0, y);
        x0 = x0 + h;
    }
    cout << "Approximate solution is: " << y << endl;
}

int main()
{
    double x0 = 0;
    double y0 = 1;
    double h = 0.025;

    double x = 0.1;
    euler(x0, y0, h, x);
    return 0;
}
