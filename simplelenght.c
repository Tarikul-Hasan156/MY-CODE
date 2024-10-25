#include<stdio.h>
int main ()
{
    int x;
     printf("Enter the size of arry :");
     scanf("%d",&x);
     int arr1[x],arr2[x];
     int i;
     printf("enter the value of arry :");
     for (i=0;i<x;i++)
     {
            scanf("%d",&arr1[i]);

     }
     for (i=0;i<x;i++)
     {
        arr2[i]=arr1[i];
     
     printf ("%d",arr2[i]);
     }
     return 0;
}