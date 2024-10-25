#include<stdio.h>
int main ()
{
    char s1[50],ch;
       int i,vowel,consconent,word,digit,other;

    gets (s1);

    for ( i=vowel=consconent=word=digit=other=0;(ch=s1[i])!='\0';i++)
    {
        if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            {

                vowel++;
            }else if (ch>='0'&&ch<='9')
            {
                digit++;
            }else if ((ch>='a'&&ch<='z') || (ch>'A'&&ch<'Z'))
                {
                    consconent++;
                }else if (ch==' ')
                {
                    word++;
                }else{

                other++;
                }




    }
    word++;
    printf("vowel:%d\n",vowel);
        printf("consconent:%d\n",consconent);
    printf("word:%d\n",word);
    printf("digit:%d\n",digit);
    printf("other:%d",other);


            return 0;



}
