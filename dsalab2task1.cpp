//Binary search
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    cout<<"Enter the size of array:"<<endl;
    int x;
    cin>>x;
    int arr[x];
    int lower=0;
    int higher=x;
    int mid=0;
    cout<<"Enter the value of array :"<<endl;
    for (int i=0;i<x;i++)

    {

        cin>>arr[i];
    }
    cout<<"Enter your value:"<<endl;
    int m;
    cin>>m;

    for (int i=0;i<x;i++)
    {
        mid=(lower+higher)/2;
        if (arr[mid]==m)
        {

            cout<<"Value is found at index : "<<" "<<mid<<endl;
            break;
        }
        if (arr[mid]<m)
        {
            lower=mid+1;
        }else
        {
            higher=mid-1;
        }

    }
    return 0;
}
