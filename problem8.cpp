#include<bits/stdc++.h>
using namespace std;
class A
{
public:
    showA()
    {
        cout<<"Euler circuit is a circuit containing all the edges of a graph."<<endl;

    }
};
class C:virtual public A
{

};
class D: virtual public A
{

};
class E :public C,public D
{
public:
    show()
    {
        showA();
    }
};
int main()
{
    E r1;
    r1.show();





    return 0;
}
