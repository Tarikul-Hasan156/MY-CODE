#include<bits/stdc++.h>
using namespace std;
class employee
{
private:
    string name;
    int id,salary;
public:
    employee()
    {
        name='\0';
        id=0;
        salary=0;
    }
    employee (string name,int id,int salary)
    {
        this->name=name;
        this->id=id;
        this->salary=salary;

    }
    virtual void calculatesalary()=0;
};
class fulltime :public employee
{
public:
    void calculatesalary ()
    {
        cout<<"50k"<<endl;
    }
};
class parttime :public employee
{
private:
    int hour;
    int workrate;
public:
    parttime()
    {
        hour=0;
        workrate=0;
    }
    parttime (int hour , int workrate )
    {
        this->hour=hour;
        this->workrate=workrate;
    }
    void calculatesalary ()
    {
        cout<<hour*workrate<<endl;
    }

};

int main ()
{
    employee *ptr;
    fulltime r1;
    ptr=&r1;
    ptr->calculatesalary();
    parttime r2 (10,70);
    ptr=&r2;
    ptr->calculatesalary();
    return 0;
}
