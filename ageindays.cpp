#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int x;
    cin>>x;
    int year=0,month=0,day=0;
    if (x>=365)
    {
        year=x/365;
        x=x%365;
    }
    if (x>=30)
    {
        month=x/30;
        x=x%30;
    }
    cout<<year<<" "<<"ano(s)"<<endl;
    cout<<month<<" "<<"mes(es)"<<endl;
    cout<<x<<" "<<"dia(s)"<<endl;
    return 0;
}