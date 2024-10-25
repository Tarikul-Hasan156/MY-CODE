#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    cout<<x<<endl;
    int hundred=0,fifty=0,twenty=0,ten=0,five=0,two=0,one=0;
    if (x >= 100)
    {
        hundred = x / 100;
        x=x%100;
        
    }
     if (x >= 50)
    {
        fifty = x / 50;
        x=x%50;
    }
     if (x >= 20)
    {
        twenty = x / 20;
        x=x%20;
    }
     if (x >= 10)
    {
        ten = x / 10;
        x=x%10;
    }
     if (x >= 5)
    {
        five = x / 5;
        x=x%5;
    }
     if (x >= 2)
    {
        two = x / 2;
        x=x%2;
    }
     if (x >= 1)
    {
        one = x / 1;
        x=x%1;
    }
    
    cout<<hundred<<" "<<"nota(s) de R$ 100,00"<<endl;
    cout<<fifty<<" "<<"nota(s) de R$ 50,00"<<endl;
    cout<<twenty<<" "<<"nota(s) de R$ 20,00"<<endl;
    cout<<ten<<" "<<"nota(s) de R$ 10,00"<<endl;
    cout<<five<<" "<<"nota(s) de R$ 5,00"<<endl;
    cout<<two<<" "<<"nota(s) de R$ 2,00"<<endl;
    cout<<one<<" "<<"nota(s) de R$ 1,00"<<endl;


    return 0;
}