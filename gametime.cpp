#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int x,y;
    cin>>x>>y;
    if (x==y)
    {
        cout<<"O JOGO DUROU 24 HORA(S)"<<endl;
    }
    if(x>y)
    {
        cout<<"O JOGO DUROU "<<(y+24)-x<<" "<<"HORA(S)"<<endl;
    }else if (y>x)
    {
        cout<<"O JOGO DUROU "<<(y-x)<<" HORA(S)"<<endl;
    }
    return 0;
}