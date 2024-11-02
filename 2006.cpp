#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int T,c=0;
    cin>>T;
    int x;
    for (int i=0;i<5;i++)
    {
        cin>>x;
        if (x==T)
        c++;

    }
    cout<<c<<endl;

    return 0;
}