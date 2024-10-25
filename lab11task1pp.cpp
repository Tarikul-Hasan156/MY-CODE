#include<bits/stdc++.h>
using namespace std;
class Animal
{
public:
 virtual void  makesound ()=0;
 virtual string getname ()=0;
};
class Dog:public Animal
{
public:
    void makesound ()
    {
        cout<<"bark"<<endl;
    }
    string getname()
    {
        string name="dog";
        return name;
    }
};
class cat:public Animal
{
public:
    void makesound ()
    {
        cout<<"meow"<<endl;
    }
    string getname()
    {
        string name="cat";
        return name;
    }
};
class cow:public Animal
{
public:
    void makesound ()
    {
        cout<<"moo"<<endl;
    }
    string getname()
    {
        string name="cow";
        return name;
    }
};
int main ()
{
    Animal *ptr;
    Dog r1;
    ptr=&r1;
    ptr->makesound();
    string name;
    name=ptr->getname();
    cout<<name<<endl;
    return 0;
}
