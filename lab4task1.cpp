//Insertion sorting 
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    cout<<"Insertion sorting"<<endl;

    int x,i=0,j=0,key=0;
    cin>>x;
    int arr[x];
    for (i=0;i<x;i++)
    {
        cin>>arr[i];
    }
    for ( i=1;i<x;i++)
    {
        key=arr[i];
        for (j=i-1;j>=0&&arr[j]>key;j--)
        {
            arr[j+1]=arr[j];
        }
        arr[j+1]=key;
    }
    for (i=0;i<x;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}