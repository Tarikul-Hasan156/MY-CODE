#include<bits/stdc++.h>
using namespace std;
int main ()

{
    int num,e=0,o=0,p=0,n=0;
    for (int i=0;i<5;i++)
    {
        cin>>num;
        if (num%2==0)
        {
            e++;
        }else 
        {
            o++;
        }
        if (num>0)
        {
            p++;
        }if (num<0)
        {
            n++;
        }
        
    }
    printf("%d valor(es) par(es)\n",e);
    printf("%d valor(es) impar(es)\n",o);
    printf("%d valor(es) positivo(s)\n",p);
    printf("%d valor(es) negativo(s)\n",n);
     
    return 0;
}