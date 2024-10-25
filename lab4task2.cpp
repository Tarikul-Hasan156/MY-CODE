#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int x;
    cin>>x;
    int arr[x];
    for(int i=0;i<x;i++)
    {
        cin>>arr[i];
    }
    for (int i=0;i<x-1;i++)
    {
        int Min = i;
        for (int j=i+1;j<x;j++)
        {
            if (arr[j]<arr[Min])
            {
                Min = j;
            }

        }
        if (Min!=i)
        {
            int temp=arr[i];
            arr[i]=arr[Min];
            arr[Min]=temp;
        }
        cout<<"Pass :"<<i<<endl;
        for (int i=0;i<x;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}