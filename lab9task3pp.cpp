#include<bits/stdc++.h>
using namespace std;
class flower
{
public:
   virtual void  showitem ()=0;
};
class rose : public flower
{
public:
    void showitem ()
    {
        cout<<"sells rose"<<endl;
    }
};
class marigold:public flower
{
public:
    void showitem()
    {
        cout<<"sells marigold"<<endl;
    }
};
int main ()
{
    flower *ptr;
    rose r1;
    ptr=&r1;
    ptr->showitem();
    marigold m1;
    ptr=&m1;
    ptr->showitem();
    return 0;
}
