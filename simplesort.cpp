#include<bits/stdc++.h>
using namespace std;
void sort(int arr[],int x)
{
     for (int i=0;i<x-1;i++)
    {
        for (int j=0;j<x-i-1;j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp=0;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for (int i=0;i<x;i++)
    {
        cout<<arr[i]<<endl;
    }
}
int main ()
{
   
    int arr[3],ar[3];
    for(int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }
    for (int i=0;i<3;i++)
    {
        ar[i]=arr[i];
    }
     sort(arr,3);
     cout<<endl;

    for (int i=0;i<3;i++)
    {
        cout<<ar[i]<<endl;
    }
    return 0;
}