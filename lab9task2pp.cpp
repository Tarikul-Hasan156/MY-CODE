#include<bits/stdc++.h>
using namespace std;
class Animal
{
public:
    virtual void makesound ()=0;
};
class Dog:public Animal
{
public:
    void makesound ()
    {
        cout<<"bark"<<endl;
    }
};
class Cat:public Animal
{
public:
    void makesound ()
    {
        cout<<"meow"<<endl;
    }
};
int main ()
{
    Animal *ptr;
    Dog r1;
    ptr=&r1;
    ptr->makesound();
    Cat r2;
    ptr=&r2;
    ptr->makesound();
    return 0;
}
