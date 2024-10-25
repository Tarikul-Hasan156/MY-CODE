#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int odd=0,even=0;
     int x;
     cin>>x;
     for (int i=1;i<=x;i++)
     {
        if (i%2==0)
        {
            even=even+i;
        }else
        {
            odd=odd+i;
        }
     }
     if (odd>even)
     {
        odd=odd-even;
        cout<<"-"<<odd;
     }else
     {
        even=even-odd;
        cout<<even;
     }
    return 0;
}