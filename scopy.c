#include<stdio.h>
int main ()
{
    char arr[200],ch;
    gets (arr);
    int i,digit,alpha,others;
    for (i=digit=alpha=others=0;(ch=arr[i])!='\0';i++)
    {

        if (ch>='0'&&ch<='9')
        {
            digit++;
        }else if ((ch>='a'&&ch<='z')||(ch>='A'&&ch<='A'))
        {
            alpha++;
        }else
        {
            others++;
        }
    }
    printf("Digits : %d\n",digit);
        printf("alphabets  : %d\n",alpha );
            printf("others  : %d\n",others);
            return 0;


}
