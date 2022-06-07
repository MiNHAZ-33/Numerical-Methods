#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    int r = 1;
    for (int i = 2; i <= n; i++)
    {
        r *= i;
    }
    return r;
}

float u_cal(float u, int n)
{
    float temp = u;
    for (int i = 1; i < n; i++)
    {
        temp = temp * (u - i);
    }
    return temp;
}

int main()
{
    int n = 4;
    float x[] = {45, 50, 55, 60};
    float y[n][n];

    y[0][0] = 0.7071;
    y[1][0] = 0.7660;
    y[2][0] = 0.8192;
    y[3][0] = 0.8660;

    // Forward difference table
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            y[j][i] = y[j + 1][i - 1] - y[j][i - 1];
        }
    }

    float value = 52;
    float sum = y[0][0];
    float u = (value - x[0]) / (x[1] - x[0]);

    for (int i = 1; i < n; i++)
    {
        sum = sum + (u_cal(u, i) * y[0][i]) /
                        fact(i);
    }
    cout << "Value at : " << value << " is " << sum << endl;

    return 0;
}
