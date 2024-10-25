//linear search
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    cout<<"Linear search"<<endl;
    cout<<"Enter the size of array :"<<endl;
    int x;
    cin>>x;
    int arr[x];
    cout<<"Enter the values of array:"<<endl;
    for (int i=0;i<x;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the searching value:"<<endl;
    int m;
    cin>>m;
    for (int i=0;i<x;i++)
    {

        if (arr[i]==m)
        {

            cout<<"Value is found at index :"<<i<<endl;
            break;
        }
    }

    return 0;
}
