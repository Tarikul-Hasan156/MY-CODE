#include<stdio.h>
int main ()
{

    int x;
    scanf("%d",&x);
    int row,col;
    for (row=1;row<=x;row++)
    {

        for (col=1;col<=row;col++)
        {

            printf("%d*",col);
        }
        printf("\n");
    }
    return 0;

}
