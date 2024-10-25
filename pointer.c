#include<stdio.h>
int main ()
{

    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    int *p,*q,*r;
    p=&x;
    q=&y;
    r=&z;
    if (*p>*q&&*p>*r)
    {

        printf("%d is maximum",*p);
    }
    else if (*q>*p&&*q>*r)
    {
          printf("%d is maximum",*q);

    }else
    {
         printf("%d is maximum",*r);
    }
    return 0;


    printf("%d",*p+*q);
    return 0;
}
