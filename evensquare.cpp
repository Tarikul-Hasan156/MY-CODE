#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    for (int i = 1; i <= N; i++)
    {
        if (i%2==0)
        {
            int r=pow(i,2);
            printf("%d^2 = %d\n",i,r);
            
        }
    }
    return 0;
}