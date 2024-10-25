#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int N,c=0,o=0;
    cin>>N;
    int X;
    for (int i=0;i<N;i++)
    {
        cin>>X;
        if (X>=10 && X<=20)

        {
            c++;
        }else
        {
            o++;
        }
    }
    printf("%d in\n",c);
    printf("%d out\n",o);

    return 0;
}