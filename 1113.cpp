#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int x,y,n;
    while (1)
    {
        cin>>x>>y;
        if (x==y)
        break;
        else 
        {
            if (x>y)
            cout<<"Decrescente"<<endl;
            else if(y>x)
            cout<<"Crescente"<<endl;
        }
    }
    
    
        
    
    
    return 0;
}