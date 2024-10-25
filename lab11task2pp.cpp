#include<bits/stdc++.h>
using namespace std;
template < class x>
x findmaximum (x arr[])
{

    x Max=arr[0];
    for (int i=1;i<5;i++)
    {
        if (arr[i]>Max)
        {
            Max=arr[i];
        }
    }
    return Max;
}
int main ()
{
    int intarr[5]={5,10,3,8,2};

    int intmax=findmaximum(intarr);

    cout<<intmax<<endl;

    double darr[]={3.14,2.718,1.618,2.22,0.99};

    double doblemax=findmaximum(darr);

    cout<<  doblemax<<endl;

    char  charr[]={'A','B','C','D','Z'};

    char  cmax=findmaximum( charr);


    cout<<cmax<<endl;

    return 0;
}
