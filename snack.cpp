#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int x,y;
    cin>>x>>y;
    if (x==1)
    {
        float price=y*4;
        printf("Total: R$ %.2f\n",price);
    }
    else if (x==2)
    {
        float price=y*4.5;
        printf("Total: R$ %.2f\n",price);
    }
    else if (x==3)
    {
        float price=y*5;
        printf("Total: R$ %.2f\n",price);
    }
    else if (x==4)
    {
        float price=y*2;
        printf("Total: R$ %.2f\n",price);
    }
    else if (x==5)
    {
        float price=y*1.5;
        printf("Total: R$ %.2f\n",price);
    }
    return 0;
}