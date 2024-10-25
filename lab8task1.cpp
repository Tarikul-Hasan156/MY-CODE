#include<bits/stdc++.h>
using namespace std;
class Full
{
private:
    string name;
public:
    Full ()
    {
        name='\0';
    }
    Full (string n)
    {
        name=n;
    }
    void display()
    {
        cout<<name<<endl;
    }
   friend  Full operator + (Full obj1,Full obj2);
};
  Full operator + (Full obj1,Full obj2)
  {
      Full one;
      one.name=obj1.name+" "+obj2.name;
      return one;
  }

int main ()
{
    Full firstname("Tarikul"),middlename("Hasan"),lastname("Dipu");
    Full r1;
    r1=firstname+middlename+lastname;
    r1.display();

    return 0;
}
