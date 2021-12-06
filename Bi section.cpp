#include<iostream>
using namespace std;
#define EPSILON 0.001

double func(double x)
{
    return x*x*x - x*x + 2;
}

void bisection(double a, double b)
{
    if(func(a)*func(b)>=0)
    {
        cout << "you have not assumed right a and b"<< endl;
        return;
    }
    double c = a;
    while((b-a)>=EPSILON)
    {
        c = (a+b)/2;
        if(func(a)==0.0)
            break;
        else if(func(c)*func(a)<0)
            b = c;
        else
            a = c;
    }
    cout<<"THE VALUE OF ROOT IS: "<<c;
}

int main(){
    double a  = -200, b = 300;
    bisection(a,b);
    return 0;
}
