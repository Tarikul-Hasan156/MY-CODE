#include<bits/stdc++.h>
using namespace std;
class Rectangle
{
private:
    int height,width;
public:
    Rectangle()
    {
        height=0;
        width=0;
    }
    Rectangle(int height,int width)
    {
        this->height=height;
        this->width=width;
    }
    void showarea()
    {
        cout<<height*width<<endl;
    }
    void operator ++()
    {
        height++;
    }
    void operator -- (int )
    {
        width--;
    }
    void show()
    {
        cout<<height<<" "<<width<<endl;
    }

};
int main ()
{
    Rectangle r1(2,3);
    Rectangle r2 (10,20);
    r2.showarea();
    r2.show();
    ++r1;
    r2--;
    r1.show();
    r2.show();
    return 0;



    return 0;
}
