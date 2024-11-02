#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int x,y,sum=0;
    for (int i=0;i<3;i++)
    {
        cin>>x>>y;
    if (x<=0 || y<=0)
    return 0;
    else
    {
        if (x>y)
        {
            int temp=0;
            temp=y;
            y=x;
            x=temp;
            for (int i=x;i<=y;i++)
            {
                printf("%d ",i);
                sum+=i;
               // printf("Sum=%d\n",sum);
            }
            printf("Sum=%d\n",sum);
            sum=0;
        }else
        {
             for (int i=x;i<=y;i++)
            {
                printf("%d ",i);
                sum+=i;
               // printf("Sum=%d\n",sum);
            }
            printf("Sum=%d\n",sum);
            sum=0;
        }
    }
    }
    
    return 0;
}