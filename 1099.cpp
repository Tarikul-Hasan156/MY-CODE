#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, m, n, sum = 0;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        cin >> m >> n;
        if (m > n)
        {
            int temp = 0;
            temp = m;
            m = n;
            n = temp;
            for (int j = m + 1; j < n; j++)
            {
                if (j % 2 != 0)
                {
                    sum += j;
                }
            }
        }else
        {
            for (int j = m + 1; j < n; j++)
        {
            if (j % 2 != 0)
            {
                sum += j;
            }
        }
        }
        
        cout << sum << endl<<endl;
        sum = 0;
    }
    // cout<<sum<<endl;
    return 0;
}