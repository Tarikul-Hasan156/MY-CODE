#include<windows.h>//windows api function
#include<stdio.h>
#include<conio.h>
#include <stdlib.h>//memory allocation and deallocation
#include<string.h>
#include<ctype.h>
#include<time.h>

void password();
void mainmenu(void);
void addmember(void);
void deletemember(void);
void searchmember(void);
void viewmember(void);
void editmember(void);
void closeapp(void);
void returnfunc(void);
void event(void);
int t(void);



void addevent(void);
void vieweevent(void);
void deleteevent(void);

///list of global files
FILE *fp,*ft;
COORD coord = {0, 0};

int fm;

void Screenposition (int x, int y)
{
coord.X = x; coord.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

struct member{
    int ID;
    char name[20];
    char add[20];
    char dept[20];
    int Phone_no;

    int no;
    char title[20];
    char z[100];
    char date[20];

};

struct member stu;




int main(){
password();
getch();
return 0;
}

void mainmenu()//main menu
{
    int choice;
    system("cls");
    Screenposition(20,3);
    printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd MAIN MENU \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");
Screenposition(20,5);printf("1. Add Members\n");
Screenposition(20,7);printf("2. Delete Members\n");
Screenposition(20,9);printf("3. Search Members\n");
Screenposition(20,11);printf("4. View Members\n");
Screenposition(20,13);printf("5. Event\n");
Screenposition(20,15);printf("6. Edit Members Information\n");
Screenposition(20,17);printf("7. Close application\n");
Screenposition(20,18);printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");
Screenposition(20,19);t();
Screenposition(20,23);
printf("Enter Your Choice: ");

switch(getch()){
case '1':
addmember();//first function
break;
case '2':
deletemember();
break;
case '3':
searchmember();
break;
case '4':
viewmember();
break;
case '5':
event();
break;
case'6':
editmember();
case '7':{
system("cls");
Screenposition(16,3);
printf("\t CLUB Management System\n");
Screenposition(16,5);
printf("\n\n*****************************************************************************");

exit(0);
}
default:{
Screenposition(20,22);printf("Wrong!!Correct Option");
if (getch())
mainmenu();

}
}


}
void addmember(void){
system("cls");

      Screenposition(26,2);
     printf("\xcd\xcd\xcd\xcd Add MEMBER INFO \xcd\xcd\xcd");
    int print = 25;
    FILE *fp;
    fp = fopen("record_nxt.txt","a+");
    if(fp == NULL){
        MessageBox(0,"Error in Opening file\nMake sure your file is not write protected","Warning",0);//windows api function

    }
    else

    {
        ///fflush(stdin);
        Screenposition(print,6);printf("Member ID: ");scanf("%d",&stu.ID);//stu-structure variable
        fflush(stdin);// Clear the input buffer
        Screenposition(print,8);printf("Name: ");gets(stu.name);
        Screenposition(print,10);printf("Address: ");gets(stu.add);
        Screenposition(print,12);printf("Department name: ");gets(stu.dept);
        Screenposition(print,14);printf("Phone Number: ");scanf("%d",&stu.Phone_no);

        fwrite(&stu, sizeof(stu), 1, fp);

    }

    fclose(fp);
    Screenposition(40,17); printf("The record is sucessfully added");
     Screenposition(40,18);printf("Save any more Y/N");
    if(getch()=='n')
    mainmenu();
    else
    system("cls");
    addmember();
}




void deletemember( )
{
system ("cls");
Screenposition(26,2);
     printf("\xcd\xcd\xcd\xcd Delete MEMBER  \xcd\xcd\xcd");






int d;
char another='y';
while(another=='y')
{
    system("cls");
    Screenposition(26,2);
     printf("\xcd\xcd\xcd\xcd Delete MEMBER  \xcd\xcd\xcd");
Screenposition(10,5);
printf("Enter the Member ID to  delete:");
scanf("%d",&d);
fp=fopen("record_nxt.txt","r+");
rewind(fp);// Moves the file pointer to the beginning of the file
while(fread(&stu,sizeof(stu),1,fp)==1)
{
if(stu.ID==d)
{


Screenposition(10,8);
printf("Member name is %s",stu.name);
Screenposition(10,9);

fm='Z';
}
}
if(fm!='Z')
{
Screenposition(10,10);
printf("No record is found in LIST");
if(getch())
mainmenu();
}
if(fm=='Z' )
{
Screenposition(10,7);
printf("The Member is available");
Screenposition(10,10);
printf("Do you want to delete it?(Y/N):");
if(getch()=='y')
{
ft=fopen("test.txt","w+");//temporary file
rewind(fp);
while(fread(&stu,sizeof(stu),1,fp)==1)
{
if(stu.ID!=d)
{

fwrite(&stu,sizeof(stu),1,ft);// Write records to the temporary file
}
}
fclose(ft);
fclose(fp);
remove("record_nxt.txt");
rename("test.txt","record_nxt.txt");
fp=fopen("record_nxt.txt","r+");
if(fm=='Z')
{
Screenposition(10,10);
printf("The record is sucessfully deleted");
Screenposition(10,11);
printf("Delete another record?(Y/N)");
}
}
else
mainmenu();
fflush(stdin);
another=getch();
}
}
Screenposition(10,15);
mainmenu();
///returnfunc();

}


void searchmember(void){
system("cls");
int s;
Screenposition(10,3);
printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd SEARCH MEMBER \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");
Screenposition(10,5);
printf("Enter the Member ID to  search:");
scanf("%d",&s);
fp=fopen("record_nxt.txt","r+");
rewind(fp);
while(fread(&stu,sizeof(stu),1,fp)==1)
{
if(stu.ID==s)
{

Screenposition(10,7);
printf("The Member is available");

Screenposition(10,9);
printf("ID: %d",stu.ID);
Screenposition(10,10);
printf("Name: %s",stu.name);
Screenposition(10,11);
printf("Address: %s",stu.add);
Screenposition(10,12);
printf("Department name: %s",stu.dept);
Screenposition(10,13);
printf("Phone nO: %d",stu.Phone_no);

fm='Z';
}
}
if(fm!='Z')
{
Screenposition(10,10);
printf("No record is found in LIST");
if(getch())

mainmenu();
}

{
Screenposition(10,9);
printf("");
fclose(fp);
returnfunc();

getch();
}}

void viewmember(void)//view member
{

system("cls");

FILE *fp;
int i=0,j;
system("cls");
Screenposition(15,1);
printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd MEMBERS LIST \xcd\xcd\xcd\xcd\xcd\xcd");
Screenposition(2,3);
printf(" MEM_ID    MEMBER NAME    ADDRESS     DEPARTMENT     PHONE_NO    ");
j=5;
fp=fopen("record_nxt.txt","rb");//read mode
while(fread(&stu,sizeof(stu),1,fp)==1)
{
Screenposition(3,j);
printf("%d",stu.ID);
Screenposition(14,j);
printf("%s",stu.name);
Screenposition(28,j);
printf("%s",stu.add);
Screenposition(40,j);
printf("%s",stu.dept);
Screenposition(55,j);
printf("%d",stu.Phone_no);

Screenposition(69,j);

printf("\n\n");
j++;
i++;
}
Screenposition(3,25);
printf("Total Members =%d",i);
fclose(fp);
Screenposition(35,25);
returnfunc();
getch();
}

void event(void){

system("cls");
int i;
Screenposition(20,3);
printf("\xcd\xcd\xcd\xcd\xcd\xcd EVENT MENU \xcd\xcd\xcd\xcd\xcd\xcd");
Screenposition(20,5);
printf("1. Add Event   ");
Screenposition(20,7);
printf("2. View Event");
Screenposition(20,9);
printf("3. Delete Event");
Screenposition(20,11);
printf("4. Mainmenu");
Screenposition(20,12);printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");
Screenposition(20,15);printf("Enter Your Choice : ");
switch(getch()){
case '1':
addevent();
break;
case '2':
vieweevent();
break;
case '3':
deleteevent();
case'4':
mainmenu();
default:{
Screenposition(20,22);printf("Wrong!!Correct Option\a");
if (getch())
mainmenu();

}
}
}

void addevent(){
    system("cls");
Screenposition(26,2);
     printf("\xcd\xcd\xcd\xcd Add Event \xcd\xcd\xcd");
    int print = 25;
    fp = fopen("record.dat","a+");
    if(fp == NULL){
        MessageBox(0,"Error in Opening file\nMake sure your file is not write protected","Warning",0);

    }else{
        fflush(stdin);
        Screenposition(print,5);printf("event date:");gets(stu.date);
        Screenposition(print,6);printf("Event name: ");gets(stu.title);
        Screenposition(print,7);printf("Details: ");gets(stu.z);
        fwrite(&stu, sizeof(stu), 1, fp);
        Screenposition(40,12); printf("The record is sucessfully added");
    }

    fclose(fp);
Screenposition(40,13);printf("Save any more Y/N");
    if (getch()=='n')
    mainmenu();
    else
    system("cls");
    addevent();

Screenposition(25,20);
returnfunc();
getch();
}

void deleteevent()
{
    system("cls");
    char date[20];
   fflush(stdin);

    printf("\n\n\tDELETE event\n\t==========================\n\tEnter the date to delete:");

    gets(date);
    fp=fopen("record.dat","r");
    ft=fopen("temp.dat","w");
    while(fread(&stu,sizeof(stu),1,fp)!=0)
    if (stricmp(date,stu.date)!=0)
    fwrite(&stu,sizeof(stu),1,ft);
    fclose(fp);
    fclose(ft);
    remove("record.dat");
    rename("temp.dat","record.dat");
    printf("\n\t\tRecord is delete");

Screenposition(25,25);
returnfunc();
getch();
}



void vieweevent()
{
    system("cls");

int j=5;
Screenposition(1,1);
printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd view events \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");
Screenposition(1,3);printf("Event date         event name               Details");

fp=fopen("record.dat","rb");
while(fread(&stu,sizeof(stu),1,fp)==1)
{

Screenposition(1,j);
printf("%s",stu.date);
Screenposition(18,j);
printf("%s",stu.title);
Screenposition(46,j);
printf("%s",stu.z);
j++;
}
fclose(fp);

Screenposition(25,25);
returnfunc();
getch();
}


void editmember(void){
system("cls");

int s,print=37;
Screenposition(15,3);
printf("\xcd\xcd\xcd\xcd\xcd\xcd Edit MEMBER info \xcd\xcd\xcd\xcd\xcd\xcd");
Screenposition(10,5);
printf("Enter the Member ID to edit:");
scanf("%d",&s);
fp=fopen("record_nxt.txt","r+");

while(fread(&stu,sizeof(stu),1,fp)==1)
{
if(stu.ID==s)
{

Screenposition(10,7);
printf("The Member is available");

        fflush(stdin);
        Screenposition(print,12);printf("Name: ");gets(stu.name);
        Screenposition(print,14);printf("Address: ");gets(stu.add);
        Screenposition(print,16);printf("Department name: ");gets(stu.dept);
        Screenposition(print,18);printf("Phone Number: ");scanf("%d",&stu.Phone_no);
        Screenposition(print,22);printf("The record is modified");
        fseek(fp,-sizeof(stu), SEEK_CUR);//f seek move the pointer forward or backward and ftell find the current position
            fwrite(&stu,sizeof(stu), 1, fp);

fm=1;
break;
}
}
if(fm!=1)
{
Screenposition(10,10);
printf("No record is found in LIST");
if(getch())
mainmenu();
}

fclose(fp);

Screenposition(37,22);
returnfunc();
getch();
}



void returnfunc(void)//return function
{{
    Screenposition(25,25);
printf("Press ENTER to return the main menu");
}
if(getch()==13)
mainmenu();
}
int t(void){
time_t t;
time(&t);
printf("Date and time:%s\n",ctime(&t));

return 0 ;
}

void fordelay(int j)
{   int i,k;
    for(i=0;i<j;i++)
         k=i;
}


void password(void){
system("cls");
char pass[10],ch,password[10]="sdp12345";
int i=0;
Screenposition(25,2);
printf("==== CLUB MANAGEMENT SYSTEM ====");
Screenposition(20,5);
printf("Enter the password to Login:");

while(ch!=13)
{
ch=getch();

if(ch!=13 && ch!=8){
putch('*');
pass[i] = ch;
i++;
}
}
pass[i] = '\0';


if(strcmp(pass,password)==0){
Screenposition(13,8);
    printf("Password Matched!!");
    Screenposition(14,9);
    printf("Loading ");
for(i=0;i<=6;i++)
        {
            fordelay(100000000);

            printf(".");
        }
                system("cls");
            mainmenu();
        }
        else
        Screenposition(15,13);
        printf("Password is invalid!!\a");
        printf("\tENTER correct password");
        getch();
        main();
}



