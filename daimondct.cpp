#include<bits/stdc++.h>
using namespace std;
class A
{
public:
    showA()
    {
        cout<<"51 intake! Best of luck!!."<<endl;
    }
};
class C:virtual public A
{

};
class D:virtual public A
{

};
class E:public C,public D
{

    show()
    {
        showA();
    }

};
int main ()
{
    E  r1;
    r1.show();
    return 0;
}
