#include<bits/stdc++.h>
using namespace std;
int main ()

{
    double x1,y1;
    cin>>x1>>y1;
    double x2,y2;
    cin>>x2>>y2;
    double p=(x2-x1);
    double q=(y2-y1);
   
    double distance=sqrt(pow(p,2)+pow(q,2));
    cout<<setprecision(5)<<distance<<endl;
    return 0;
}