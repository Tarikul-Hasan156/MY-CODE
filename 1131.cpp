#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,x,y,z,sum1=0,sum2=0,c1=0,c2=0,i=0,draw=0;
    while (1)
    {
        cin>>x>>y;
        cout<<"Novo grenal (1-sim 2-nao)"<<endl;
        i++;
        if (x>y)
        {
            sum1+=x;
            c1++;
        }else if (y>x)
        {
            sum2+=sum2;
            c2++;
        }else 
        {
            draw++;
        }
        cin>>n;
        if (n==1)
        {
            continue;
        }else if (n==2)
        break;
        
       

    }
   // cout<<"djksfsjdj"<<endl;
    printf("%d grenais\n",i);
    printf("Inter:%d\n",c1);
    printf("Gremio:%d\n",c2);
    printf("Empates:%d\n",draw);
    printf("Inter venceu mais\n");

    return 0;
}