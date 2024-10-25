#include<bits/stdc++.h>
using namespace std;
struct Element 
{
    string symbol;
    string name;
    int position,group;


};
int main ()
{
    Element periodictable[118]={
    
        {"H","Hydrogen",1,1},
        {"He","Helium",18,18},
        {"Li","Lithium",1,1},
        {"Be","Beryllium",2,2},
        {"B","Boron",13,13},
        {"C","Carbon",14,14},
        {"N","Nitrogen",15,15},
        {"O","Oxygen",16,16},
        {"F","Fluorine",17,17},
        {"Ne","Neon",18,18},
       //if you want you can add more elements

    
    };
        string symbol;
        cout<<"Enter the symbol of the elements: ";
        cin>>symbol;
        for (int i=0;i<118;++i)
        {
            if (periodictable[i].symbol==symbol)
            {
                cout<<"Element: "<<periodictable[i].name<<endl;
                cout<<"Periodic position :"<<periodictable[i].position<<endl;
                cout<<"Group: "<<periodictable[i].group<<endl;
            }
        }


    return 0;
}