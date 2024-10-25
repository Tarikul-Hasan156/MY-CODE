#include<bits/stdc++.h>
using namespace std;
int main()

{
    float num,sum=0;
    int c=0;
    for (int i=0;i<6;i++)
    {
        cin>>num;
        if (num>0)
        {
           c++;
            sum=sum+num;
        }

    }
    printf("%d valores positivos\n",c);
    printf("%.1f\n",sum/c);
    return 0;
}