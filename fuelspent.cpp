#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n=12;
    int time,speed;
    cin>>time>>speed;
    float area=(time*speed);
    float cal=area/n;
    printf("%.3f\n",cal);
   
    return 0;
}