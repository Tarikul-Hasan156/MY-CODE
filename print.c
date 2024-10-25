#include<stdio.h>
int main ()
{
    int x;
    printf("Please enter the size of arry");
    scanf("%d",&x);
    int arr[x];
    int i;
    for (i=0;i<x;i++)
    {
        scanf("%d",&arr[i]);
        printf("%d ,",arr[i]);
    }
    return 0;
}