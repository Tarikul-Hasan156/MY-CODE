#include<bits/stdc++.h>
using namespace std;
template<class x>
class Container
{
private:
    x arr[10];
    int total=0;
public:
    void addelement(x one)
    {
        arr[total]=one;
        total++;
    }
    void displayelement ()
    {
        for (int i=0;i<total;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
    void getsize()
    {
        cout<<"\n"<<total<<endl;
    }
};
int main ()
{
    Container<int>c1;
    c1.addelement(5);
    c1.addelement(20);
    c1.addelement(20);
    Container<double>c2;
    c2.addelement(20.5);
    c1.displayelement();
    c2.displayelement();
    c1.getsize();
    return 0;

}


