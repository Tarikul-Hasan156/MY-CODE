#include<stdio.h>
int main ()
{

    int X;
    printf("Enter the km :  ");
    scanf("%d",&X);
    float Y;
    printf("Enter the fuel : ");
    scanf("%f",&Y);
    float x=X/Y;
    printf ("%.3f km/l",x);
    return 0;

}
