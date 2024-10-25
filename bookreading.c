#include<stdio.h>
int main ()
{
    int n,t;
    scanf("%d %d" ,&n,&t);
    int num,sum=0,c=0;
    for (int i=0;i<n;i++)
   {
        
        scanf("%d",&num);
        sum=sum+num;
        if (sum<=t)
        {
            c++;
        }
   }
   printf("%d\n",c);

    return 0;
}