#include<stdio.h>
int main ()
{
    int N,K;
    scanf("%d %d",&N,&K);
    for (int j=0;j<N;j++)
    {
        for (int i=1;i<=K;i++)
    {
        printf("%d ",i);

    }
    printf("\n");
    }
    
    return 0;
}