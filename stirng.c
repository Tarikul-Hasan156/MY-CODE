#include<stdio.h>
int main ()
{

    char arr[20],arr1[40];
    gets (arr);
    gets (arr1);
    int i,j;
    for(i=0;arr[i]!=0;i++)
    {

        for (j=0;arr1[j]!=0;j++)
        {

            arr1[j]=arr[i];
            i++;
        }
    }
}
