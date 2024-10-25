#include<stdio.h>
int main ()
{
    char s1[50]="NUR BHAI";
    char s2[11]=" BABU BHAI";
    int count=0;
    int i,j;
    for (i=0;s1[i]!='\0';i++)
    {
        count++;

    }
    for (j=0;s2[j]!='\0';j++)
    {
        s2[j+count]=s1[i];
    }
printf("%s",s2);
   // printf("\n%d",count);

    return 0;
}
