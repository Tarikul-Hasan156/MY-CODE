#include<bits/stdc++.h>
using namespace std;
class X
{
   private:
       int height,width;
   public:
    X ()
    {
        height=0;
        width=0;
    }
    X (int height,int width)
    {
        this->height=height;
        this->width=width;
    }
    void display ()
    {
        cout<<height<<" "<<width<<endl;

    }
   friend X operator + (X obj,int val);
  friend  X operator * (X obj1,X obj);
  friend X operator + (int val,X obj);
   friend X operator * (int val,X obj);
   friend X operator * (X obj ,int val);
};
X operator + (X obj,int val)
{
    X one;
    one.height=obj.height+val;
    one.width=obj.width+val;
    return one;
}
X operator * (X obj1,X obj2)
{
    X one;
    one.height=obj1.height+obj2.height;
    one.width=obj1.width+obj2.width;
    return one;
}
X operator + (int val,X obj)
{
    X one;
    one.height=val+obj.height;
    one.width=val+obj.width;
    return one;

}
X operator * (int val,X obj)
{
    X one;
    one.height=val*obj.height;
    one.width=val*obj.width;
    return one;
}
X operator * (X obj ,int val)
{
    X one;
    one.height=obj.height*val;
    one.width=obj.width* val;
    return one;

}
int main ()
{
    X ob1;
    X ob2(10,20);
    X ob3 (30,40);
    ob1=(ob2+2)*ob3;
    ob1.display();
    ob1=(10+ob2)*ob3;
    ob1.display();
    ob1=ob2*ob3+10;
    ob1.display();
    ob1=ob3*10*ob2;
    ob1.display();
    ob1=10*ob2*ob3;
    ob1.display();
    ob1=ob2*ob3*20;
    ob1.display();

    return 0;
}
