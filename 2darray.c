#include<stdio.h>
int main ()
{

    char arr[10],arr1[20];
    gets (arr);
    gets (arr1);
    int i,j,count=0;
    for (i=0;arr[i]!=0;i++)
    {
        count++;
    }
    for (j=0;arr1[j]!=0;j++)
    {
        arr[count+j]=arr1[j];
    }
  arr[count+j]='\0';

    puts(arr);
}
