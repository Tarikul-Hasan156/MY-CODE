#include<bits/stdc++.h>
using namespace std;
int ackerman(int m,int n)
{
    if (m==0)
    {
        return n+1;
    }else if (m>0 && n==0)
    {
        return ackerman(m-1,1);
    }else if (m>0 && n>0)
    {
        return ackerman (m-1,ackerman(m,n-1));
    }
}
int main ()
{
    int x,y;
    cin>>x>>y;
    int i=ackerman(x,y);
    printf("%d\n",i);

    return 0;
}