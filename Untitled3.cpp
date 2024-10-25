#include<bits/stdc++.h>
using namespace std;

int main ()
{
    char str[]="ABAABBAAABBBAAAABBBB";
    char pattern[]="AAA";
    int m=strlen(str);
    int n=strlen(pattern);
    cout <<m<< " " <<n<<endl;
    int maximum=m-n+1;

    for (int i=0; i<maximum;i++)
    {
        int j;
        for (j=0;j<n;j++)
        {
            if (str[i+j]!=pattern[j])
                break;
        }

        if (j==n)
            cout << "Pattern found at index " << i << endl;
    }

    return 0;
}
