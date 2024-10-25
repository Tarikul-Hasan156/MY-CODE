#include<bits/stdc++.h>
using namespace std;
class Person
{
private:
    string name;
    int age;
public:
    Person ()
    {
        name='\0';
        age=0;
    }
    Person (string n, int a)
    {

        name=n;
        age=a;
    }
    void show_n_a()
    {
        cout<<name<<" "<<age<<endl;
    }
};
class Address
{
private:
    string street,city;
    int zip;
public:
    Address ()
    {
        street='\0';
        city='\0';
        zip=0;
    }
    Address (string s, string c, int z)
    {
        street=s;
        city=c;
        zip=z;
    }
    void show_s_c_z()
    {
cout <<street << ' ' << city << ' '  << zip << endl;
    }

};
class Contact:public Person,public Address
{
private:
    string number;
public:
    Contact ()
    {
        number='\0';

    }
    Contact (string n, int a,string s, string c, int z,string num):Person (n,a),Address(s,c,z)
    {
        number =num;
    }
    void display ()
    {
        show_n_a();
        show_s_c_z();
        cout<<number<<endl;
    }


};
int main ()
{
    Contact p1 ("Tarikul Hasan Dipu",21,"R/d 12","Mirpur",1216,"01919169803");
    p1.display();

    return 0;
}
