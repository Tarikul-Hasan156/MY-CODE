#include<stdio.h>
#include<math.h>
int main ()
{
    double x1,y1,x2,y2;
    scanf("%lf%lf",&x1,&y1);
    scanf("%lf%lf",&x2,&y2);
       double p=(x2-x1);
    double q=(y2-y1);
    double distance=sqrt(pow(p,2)+pow(q,2));
    printf("%.4lf\n",distance);
    return 0;
}