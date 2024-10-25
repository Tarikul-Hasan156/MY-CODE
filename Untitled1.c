#include<stdio.h>
int main ()
{
    int x,y,sum=0;
    printf("Enter the size of raw and col : ");
    scanf("%d %d",&x,&y);
    int arr[x][y],tr[y][x];
    int i,j;
    for (i=0;i<x;i++)
    {
        for (j=0;j<y;j++)

        {
            scanf("%d",&arr[i][j]);
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("after \n");
    for (i=0;i<x;i++)
    {
        for (j=0;j<y;j++)

        {
            if (i==j)
            {
                sum=sum+arr[i][j];
            }

        }

    }
    printf("%d",sum);

}
