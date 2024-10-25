#include<stdio.h>
int main ()
{
    int x;
    scanf("%d",&x);
    int arr[x];
    for (int i=0;i<x;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<x;i++)
    {
        if (arr[i]<1)
        printf("Entry-level candidate\n");
        else if (arr[i]>=1 && arr[i]<=3)
        printf("Junior candidate\n");
        else if (arr[i]>=4 && arr[i]<=7)
        printf("Mid-level candidate\n");
        else if (arr[i]>7)
        printf("Senior candidate\n");


    }
   

    return 0;
}