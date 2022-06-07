#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    int temp = 1;
    for (int i = 2; i <= n; i++)
    {
        temp = temp * i;
    }
    cout << "Value at factorial: " << temp << endl;
    return temp;
}

float u_cal(float u, int n)
{
    float temp = u;
    for (int i = 1; i < n; i++)
    {
        temp = temp * (u + i);
    }
    cout << "Value at u_cal: " << temp << endl;
    return temp;
}

int main()
{
    int n = 5;
    float x[] = {1891, 1901, 1911,
                 1921, 1931};

    float y[n][n];
    y[0][0] = 46;
    y[1][0] = 66;
    y[2][0] = 81;
    y[3][0] = 93;
    y[4][0] = 101;

    for (int i = 1; i < n; i++)
    {
        for (int j = n - 1; j >= i; j--)
        {
            y[j][i] = y[j][i - 1] - y[j - 1][i - 1];
        }
    }
    float value = 1925;
    float sum = y[n - 1][0];
    float u = (value - x[n - 1]) / (x[1] - x[0]);
    cout << "OUtside loop sum: " << sum << " ";
    for (int i = 1; i < n; i++)
    {
        sum = sum + (u_cal(u, i) * y[n - 1][i]) /
                        fact(i);
        cout << "Value of sum : " << sum << " ";
    }

    cout << "The value at: " << value << " is : " << sum;

    return 0;
}