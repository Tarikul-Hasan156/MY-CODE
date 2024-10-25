#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main ()
{
    float a,b,c;
    cin>>a>>b>>c;
    int zero=4*a*c;
    if (a==0 || zero>=b*b)
    {
        cout<<"Impossivel calcular"<<endl;
    }else
    {
         float r1=((-b+sqrt(pow(b,2) - 4*a*c))/(2*a));
    
    float r2=((-b-sqrt(pow(b,2)  - 4*a*c))/(2*a));
   
    printf("R1 = %.5f\n",r1);
        printf("R2 = %.5f\n",r2);

    }
   

    return 0;
}