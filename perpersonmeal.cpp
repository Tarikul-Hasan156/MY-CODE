#include<bits/stdc++.h>
using namespace std;
void rice (float r,float x)
{
    float per;
    per=r/x;
    cout<<"Per peson rice eatten in last month:"<<" "<<setprecision(3)<<per<<endl;
}
void oil (float o,float x)
{
    float per;
    per=o/x;
    cout<<"Per peson oil inhill in last month:"<<" "<<setprecision(3)<<per<<endl;
}
int main ()
{
    float r,o,x;
    cout<<"Enter the total rice in kg:";
    cin>>r;
    cout<<"Enter the total oil in litre:";
    cin>>o;
    cout<<"Enter the total member in the mess:";
    cin>>x;
    rice(r,x);
    oil(o,x);

    return 0;
}