#include<bits/stdc++.h>
using namespace std;
int main ()
{
    char str[]="AABAACAADAABAAABAA";
    char pattern[]="AABA";
    int m=strlen(str);
    int n=strlen(pattern);
    cout<<m<<" "<<n;
    int maximum=m-n+1;
    for (int i=0;i<=maximum;i++)
    {
        int j;
        for (j=0;j<=m;i++)
        {

                 if (str[i + j] != pattern[j])
                break;



        if (j==m)
            cout << "Pattern found at index " << i << endl;
        }
    }
    return 0;
}
