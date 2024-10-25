#include<bits/stdc++.h>
using namespace std;
string arr1[50],arr2[50],arr3[50],arr4[50],arr5[50];
int total=0;
void   enter()
{
    int choice;
    cout<<"How many students do you want to enter : "<<endl;
    cin>>choice;
    if (total==0)
    {


        total=total + choice;
        for (int i=0; i<choice; i++)
        {
            cout<<"\nEnter data of student: "<<i+1<<endl<<endl;
            cout<<"Enter student name: ";
            cin>>arr1[i];
            cout<<"Enter student ID: ";
            cin>>arr2[i];
            cout<<"Enter student Depertment: ";
            cin>>arr3[i];
            cout<<"Which club student want to join: ";
            cin>>arr4[i];
            cout<<"Enter student contact: ";
            cin>>arr5[i];


        }
    }
    else
    {
        for (int i=total; i<total+choice; i++)
        {

            cout<<"\n\n\n\n\n\n\nEnter data of student: "<<i+1<<endl<<endl;
            cout<<"Enter student name: ";
            cin>>arr1[i];
            cout<<"Enter student ID: ";
            cin>>arr2[i];
            cout<<"Enter student Depertment: ";
            cin>>arr3[i];
            cout<<"Enter student class";
            cin>>arr4[i];
            cout<<"Enter student contact: ";
            cin>>arr5[i];


        }
        total=total+choice;
    }
}

void  show()
{
    for (int i=0; i<total; i++)
    {
        cout<<"Data of student: "<<i+1<<endl<<endl;
        cout<<"Name: "<<arr1[i]<<endl;
        cout<<"ID: "<<arr2[i]<<endl;
        cout<<"Department: "<<arr3[i]<<endl;
        cout<<"Class: "<<arr4[i]<<endl;
        cout<<"Contact: "<<arr5[i]<<endl;
    }
}
void  Search()
{
    string id;
    cout<<"Enter student ID which you want to search: ";
    cin>>id;
    for (int i=0; i<total; i++)
    {
        if (id==arr2[i])
        {
            cout<<"Data of student: "<<i+1<<endl<<endl;
            cout<<"Name: "<<arr1[i]<<endl;
            cout<<"ID: "<<arr2[i]<<endl;
            cout<<"Department: "<<arr3[i]<<endl;
            cout<<"Class: "<<arr4[i]<<endl;
            cout<<"Contact: "<<arr5[i]<<endl;
        }
        else
        {
            cout<<"Invalid ID!"<<endl;
        }
    }
}
void  update()
{
    string id;
    cout<<"Enter student ID which you want to search: ";
    cin>>id;
    for (int i=0; i<total; i++)
    {
        if (id==arr2[i])
        {
            cout<<"Previous Data: "<<endl<<endl;
            cout<<"Data of student: "<<i+1<<endl<<endl;
            cout<<"Name: "<<arr1[i]<<endl;
            cout<<"ID: "<<arr2[i]<<endl;
            cout<<"Department: "<<arr3[i]<<endl;
            cout<<"Class: "<<arr4[i]<<endl;
            cout<<"Contact: "<<arr5[i]<<endl;
        }
        else
        {
            cout<<"Invalid ID!"<<endl;
        }
    }
}
void  deleterecord()
{

}
int main()
{
    int value;
    while(1)
    {
            cout<<"\n"<<endl;

        cout<<"Press 1 to enter data"<<endl;
        cout<<"Press 2 to show data"<<endl;
        cout<<"Press 3 to search data"<<endl;
        cout<<"Press 4 to update data"<<endl;
        cout<<"Press 5 to delete data"<<endl;
        cout<<"Press 6 to exit"<<endl;
        cin>>value;
        switch (value)
        {
        case 1:
            enter();
            break;
        case 2:
            show();
            break;
        case 3:
            Search();
            break;

        case 4:
            update();
            break;
        case 5:
            deleterecord();
            break;
        case 6:
            exit(0);
            break;
        default :
            cout<<"Invalid input"<<endl;
            break;
        }

    }





    return 0;
}
