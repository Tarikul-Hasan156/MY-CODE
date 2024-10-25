#include<stdio.h>
int main ()
{
    int x,y,i,j,sum=0;
    printf("Enter the size of arry : ");
    scanf("%d%d",&x,&y);
    int arr[x][y];
    for (i=0;i<x;i++)
    {
        for (j=0;j<y;j++)
        {

            scanf("%d",&arr[i][j]);
                        printf("%d ",arr[i][j]);

        }
        printf("\n");
    }
    int a,b;
    printf("Enter the size for seconf matrix :");
    scanf("%d%d",&a,&b);
    int arr1[a][b];
        for (i=0;i<a;i++)
    {
        for (j=0;j<b;j++)
        {

            scanf("%d",&arr[i][j]);
                        printf("%d ",arr[i][j]);

        }
        printf("\n");
    }

    int arr2[x][b],k;
        for (i=0;i<x;i++)
    {
        for (j=0;j<b;j++)
        {

            for (k=0;k<b;k++)
            {
                sum=sum+arr[i][k]*arr1[k][j];
            }
            arr2[i][j]=sum;
            sum=0;

        }
        return 0;
}
}
