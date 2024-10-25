#include<bits/stdc++.h>
using namespace std;
int main ()
{
    float A,B,C;
    cin>>A>>B>>C;
    if (A+B>C && A+C>B && B+C>A)
    {
        float perimeter = A+B+C;
        printf("Perimetro = %.1f",perimeter);
    }else
    {
        float area=.5*(A+B)*C;
        printf("Area = %.1f",area);
    }


    return 0;
}