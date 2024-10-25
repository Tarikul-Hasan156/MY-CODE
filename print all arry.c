#include<stdio.h>
#include<limits.h>
int main ()
{
    int x;
    printf("please enter the size of arry : ");
    scanf("%d",&x);
    int arr[x];
    printf("Please enter the elements of arry : ");
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
        else if(arr[i] > max2 && arr[i] < max1)
        {

            max2 = arr[i];
        }

     }
     printf("The largest number is :%d\n",max1);
     printf("The second largest number is : %d",max2);
     return 0;
}
