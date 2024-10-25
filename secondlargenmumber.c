#include<stdio.h>
#include<limits.h>

int main ()
{
    int x;
    printf("Enter the size of arry :");
    scanf("%d",&x);
    int arr[x];
    printf("Enter the elements of array :");
    int i;
    for (i=0;i<x;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max1,max2;
    max1=max2=INT_MIN;
    for (i=0;i<x;i++)
    {
        if (arr[i]>max1)
        {
            max2=max1;
            max1=arr[i];
        }
        else if (arr[i]>max2 && arr[i]<max1)
        {
            max2 =arr[i];
        }
    }
    printf("first largest :%d Second largest: %d",max1,max2);
    return 0;

}