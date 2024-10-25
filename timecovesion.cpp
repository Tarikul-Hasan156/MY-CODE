#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int hour=0,minute=0,second=0;
    if(x>=3600)
    {
        hour=x/3600;
        x=x%3600;
    }
    if(x>=60)
    {
        minute=x/60;
        x=x%60;
    }
   cout<<hour<<":"<<minute<<":"<<x<<endl;
    return 0;
}