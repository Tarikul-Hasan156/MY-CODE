#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int x,Max=0,c=0;
    int arr[100];
    for (int i=0;i<100;i++)
    {
        cin>>arr[i];
    }
    Max=arr[0];
    for (int i=1;i<100;i++)
    {
        
        if (arr[i]>Max)
        {
            Max=arr[i];
            c=i;
            
        }

        
    }
    cout<<Max<<endl;
    cout<<c+1<<endl;
    return 0;
}