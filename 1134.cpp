#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int c1=0,c2=0,c3=0,x;
    cout<<"MUITO OBRIGADO"<<endl;
    while (1)
    {
        cin>>x;
        if (x==1)c1++;
        else if (x==2)c2++;
        else if (x==3)c3++;
        else if (x==4)break;
    }
    printf("Alcool: %d\n",c1);
    printf("Gasolina: %d\n",c2);
    printf("Diesel: %d\n",c3);
    

    return 0;
}