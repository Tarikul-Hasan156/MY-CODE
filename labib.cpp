
#include<iostream>
#include<math.h>
using namespace std;
class Point
{
private:
    double x,y;
public:
    Point()
    {
        x=0;
        y=0;
    }
    void set_h(double a,double b)
    {
        x=a;
        y=b;
    }
    void display()
    {
        cout<<x<<" "<<y<<" "<<endl;
    }
    friend double calculateDistance(Point obj1,Point obj2);
};
double calculateDistance(Point obj1,Point obj2)
{
    double temp;
    temp=sqrt(((obj2.x-obj1.x)*(obj2.x-obj1.x))+((obj2.y-obj1.y)*(obj2.y-obj1.y)));
    return temp;
}
int main()
{
    Point p1 (10,20);


    Point p2(30,40);
    double j;
    j=calculateDistance(p1,p2);
    cout<<j<<endl;
}
