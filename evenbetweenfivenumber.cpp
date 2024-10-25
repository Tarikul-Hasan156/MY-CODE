#include<bits/stdc++.h>
using namespace std;
int main ()

{
    int num,c=0;
    for (int i=0;i<5;i++)
    {
        cin>>num;
        if (num%2==0)
        {
            c++;
        }
    }
    printf("%d valores pares\n",c);
    return 0;
}