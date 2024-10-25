#include<bits/stdc++.h>
using namespace std;
int main()
{
    //int x;
     int total=0;
    int Count=0;
    string arr[100];

    for (int i=0;i<arr.size();i++)
    {
        cin>>arr[i];
       // total++;
    }
    for (int i=0;i<arr.size();i++)
    {
        for (int j=1;j<arr.size();j++)
        {
            if (arr[i]==arr[j])
            {
                Count++;
            }

        }
        total++;
    }
    int Final=total-Count;
    if (Final%2!=0)
    {
        cout<<"IGNORE HIM!"<<endl;
    }else
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    return 0;
}
