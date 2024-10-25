#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int x;
    cin>>x;
    int arr[x];
    for (int i=0;i<x;i++)
    {
        cin>>arr[i];
    }
    int MAX=arr[0];
    int MIN=arr[0];
    for(int i=1;i<x;i++)
    {
        if (MAX<arr[i])
        {
            MAX=arr[i];
        }
        if (MIN>arr[i])
        {
            MIN=arr[i];
        }
    }
    cout<<"MAX"<<'\n'<<MAX<<endl;
    cout<<"MIN"<<'\n'<<MIN<<endl;
    cout<<"Please enter the serching index"<<endl;
    int y;
    cin>>y;
    for (int i=0;i<x;i++)
    {
        if (i==y)
        {
            cout<<arr[i]<<endl;
            break;
        }
    }
    cout<<"Insert number:"<<endl;
    int m,num=10;
    cout<<"Please enter the index number where you want to insert :"<<endl;
    cin>>m;
    for (int i=0;i<)
    
    return 0;

}