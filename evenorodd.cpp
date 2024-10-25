#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,num;
    cin >> x;
    for (int i=0;i<x;i++)
    {
        cin>>num;
        if (num==0)
        cout<<"NULL"<<endl;
        
        else if (num%2==0 && num>0)
        cout<<"EVEN POSITIVE"<<endl;
        else if (num%2==0 && num<0)
        cout<<"EVEN NEGATIVE"<<endl;
        else if ((num+1)%2==0 && num<0)
        cout<<"ODD NEGATIVE"<<endl;
        else if ((num+1)%2==0 && num>0)
        cout<<"ODD POSITIVE"<<endl;
    }
    return 0;
}