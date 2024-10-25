#include<bits/stdc++.h>
using namespace std;
class Fullname
{

private:
    string name;
public:
    Fullname()
    {
        name='\0';

    }
    Fullname(string name)
    {

        this->name=name;

    }
    void display ()
    {
        cout<<name<<endl;
    }
   friend Fullname operator + (Fullname obj1,Fullname obj2);
};
Fullname operator + (Fullname obj1,Fullname obj2)
{
    Fullname one;
    one.name=obj1.name+" "+obj2.name;
    return one;
}
int main ()
{
    Fullname firstname ("Tarikul");
    Fullname middlename ("Hasan");
    Fullname lastname ("Dipu");
    Fullname r1;
    r1=firstname+middlename+lastname;
    r1.display();
    return 0;
}
