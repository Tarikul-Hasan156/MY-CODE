#include<bits/stdc++.h>
using namespace std;
int main ()
{
    float sum=0,x;
    int c=0;
    while (1)
    {
        cin>>x;
        if (x>=0 && x<=10)
        {
            sum=sum+x;
            c++;
            if (c==2)
            {
                printf("media = %.2f\n",sum/c);
                sum=0;
                break;
            }

        }else
        cout<<"nota invalida"<<endl;
    }
    return 0;
}