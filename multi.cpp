#include<iostream>
using namespace std;
int main()
{

    int arr[100];
    int c=0;
    for (int i=0;i<100;i++)
    {
        cin>>arr[i];
    }
    for (int i=0;i<100;i++)
    {
       cout<<arr[i];

           c++;


    }
    cout<<c;
    return 0;
}
