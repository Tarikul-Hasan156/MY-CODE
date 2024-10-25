#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int x;
    float x1,x2,x3;
    cin >> x;
    for (int i=0;i<x;i++)
    {
        cin>>x1>>x2>>x3;
        printf("%.1f\n",(((2*x1)+(3*x2)+(5*x3))/10));
    }

    return 0;
}