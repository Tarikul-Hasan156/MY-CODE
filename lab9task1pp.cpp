#include<bits/stdc++.h>
using namespace std;
class Shape
{
private:
    double side1,side2;
public:
    Shape ()
    {
        side1=0;
        side2=0;
    }
    Shape (double side1,double side2)
    {
        this->side1=side1;
        this->side2=side2;
    }
  virtual  void display_area() =0;

};
class triangle:public Shape
{
private:
    int base, height;

public:
    triangle()
    {
        base=0;
        height=0;
    }
   triangle (int base , int height)
   {
       this->base=base;
       this->height=height;
   }
    void display_area()
    {
        cout<<.5*base*height<<endl;
    }
};
class Rectangle:public Shape
{
private:
    int length,width;
public:
    Rectangle()
    {
        length=0;
        width=0;
    }
    Rectangle (int length ,int width)
    {
        this->length=length;
        this->width=width;
    }
    void display_area()
    {
        cout<<length*width<<endl;
    }
};
int main ()
{
    Shape *ptr;
    triangle r1(5,10);
    ptr=&r1;
    ptr->display_area();
    Rectangle r2(20,30);
    ptr=&r2;
    ptr->display_area();

    return 0;
}
