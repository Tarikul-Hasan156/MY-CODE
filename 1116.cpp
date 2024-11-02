#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int x;
    int m,n;
    cin>>x;
    for (int i=0;i<x;i++)
    {
        cin>>m>>n;
        if (m==0)
        cout<<"0.0"<<endl;
        else if (n==0)
        cout<<"divisao impossivel"<<endl;
        else 
        {
            float i=(float)m/n;
             printf("%.1f\n",i);
        }
        
           
        

        

    }
    return 0;
}