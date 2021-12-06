#include<bits/stdc++.h>
using namespace std;

int main(){
    string equation;
    string coefficient;

    getline(cin,equation);
    int j = 0;
    for(int i=0; i<equation.size(); i++)
    {
        if(equation[i] != 'x')
        {
            coefficient[j] = equation[i];
            if(equation[i] == ' ')

            j++;
        }


    }
    for(int i=0; i<equation.size(); i++)
    {
        cout<<coefficient[i];
    }


return 0;
}
